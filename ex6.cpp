#include <iostream>

using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }

    void display(const string& label) const {
        cout << label << real << " + " << imag << "i" << endl;
    }

    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    c1.display("First number: ");
    c2.display("Second number: ");

    Complex sum = c1 + c2;
    sum.display("Sum: ");

    return 0;
}