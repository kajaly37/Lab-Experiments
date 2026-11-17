#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    string carNumber;
    string color;
    int passengers;
    int year;

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Car Number: " << carNumber << endl;
        cout << "Color: " << color << endl;
        cout << "Passengers: " << passengers << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "BMW";
    myCar.carNumber = "MH12EM7733";
    myCar.color = "Black";
    myCar.passengers = 2;
    myCar.year = 2025;

    myCar.display();

    return 0;
}