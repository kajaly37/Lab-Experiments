#include <iostream>
#include <utility> 

class Sample {
private:
    int* data;

public:
   
    Sample() {
        data = new int(0);
    }

   
    Sample(int val) {
        data = new int(val);
    }

    
    Sample(const Sample& other) {
        data = new int(*other.data);
    }

    
    Sample& operator=(const Sample& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

   
    Sample(Sample&& other) noexcept {
        data = other.data;
        other.data = nullptr;
    }

    
    Sample& operator=(Sample&& other) noexcept {
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    
    ~Sample() {
        delete data;
    }

    
    void display() const {
        if (data != nullptr) {
            std::cout << *data << std::endl;
        } else {
            std::cout << 0 << std::endl;
        }
    }
};

int main() {
   
    Sample obj1;
    obj1.display();

    
    Sample obj2(5);
    obj2.display();

    
    Sample obj3(std::move(obj2));
    obj3.display();
    obj2.display();

    std::cout << std::endl;

    
    Sample temp(10);
    Sample obj4(temp);
    obj4.display();

    std::cout << std::endl;

    
    obj1 = obj4;
    obj1.display();

    return 0;
}