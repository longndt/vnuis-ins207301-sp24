#include <iostream>
using namespace std;

// Interface
class IShape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual ~IShape() {}
};

class Rectangle : public IShape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() const override {
        return width * height;
    }
    double getPerimeter() const override {
        return 2 * (width + height);
    }
};

class Circle : public IShape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea
