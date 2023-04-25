/*

25. Create a C++ Base class Shape with a constructor for
providing values for width and height. Then define two
derived classes Triangle and Rectangle, that calculate
the area of the shape area(). In the main, define two
objects: a triangle and a rectangle and then call the
area() function by this two objects.

*/

#include <iostream>
using namespace std;

class Shape {
public:
    Shape(double width, double height) : width_(width), height_(height) {}

    virtual double area() const = 0;

protected:
    double width_;
    double height_;
};

class Triangle : public Shape {
public:
    Triangle(double width, double height) : Shape(width, height) {}

    double area() const override {
        return 0.5 * width_ * height_;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : Shape(width, height) {}

    double area() const override {
        return width_ * height_;
    }
};

int main() {
    Shape* triangle = new Triangle(5.0, 10.0);
    Shape* rectangle = new Rectangle(5.0, 10.0);

    cout << "Triangle area: " << triangle->area() << endl;
    cout << "Rectangle area: " << rectangle->area() << endl;

    delete triangle;
    delete rectangle;

    return 0;
}

