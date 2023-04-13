/*

1. WAP that defines a shape class with a constructor that gives value to width and height. 
The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.

*/

#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    virtual int area() {
        return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    int area() {
        return (width * height) / 2;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {}

    int area() {
        return width * height;
    }
};

main() {
	
	int width,height;
	
	cout<<"Enter the width : "; cin>>width;
	cout<<"Enter the height : "; cin>>height;
	
    Triangle t(width, height);
    Rectangle r(width, height);

    cout << "Triangle area: " << t.area() << endl;
    cout << "Rectangle area: " << r.area() << endl;

}

