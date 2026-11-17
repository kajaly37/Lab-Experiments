#include <iostream>

using namespace std;


class Shape {
public:
   
    virtual double area() = 0;

    
    virtual ~Shape() {}
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.14 * radius * radius;
    }
};


class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};


class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* s;

    
    Circle c(7);
    s = &c;
    cout << "area of circle: " << s->area() << endl;

   
    Rectangle r(6, 4);
    s = &r;
    cout << "area of rectangle: " << s->area() << endl;

   
    Triangle t(6, 4);
    s = &t;
    cout << "area of tringle: " << s->area() << endl;

    return 0;
}