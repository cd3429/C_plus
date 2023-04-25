/*

13. Develop a C++ solution for Maths students to solve
all types Geometry problems such like
Area of Circle
Perimeter of Circle
Area of Square
Area of Rectangle
Area of Triangle
Area of Sphere

*/

#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the perimeter of a circle
double calculateCirclePerimeter(double radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a sphere
double calculateSphereArea(double radius) {
    return 4 * M_PI * radius * radius;
}

int main() {
    double radius, side, length, width, base, height;

    // Calculate the area and perimeter of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double circleArea = calculateCircleArea(radius);
    double circlePerimeter = calculateCirclePerimeter(radius);

    cout << "\t\tArea of the circle: " << circleArea << endl;
    cout << "\t\tPerimeter of the circle: " << circlePerimeter << endl;

    // Calculate the area of a square
    cout << "Enter the length of a side of the square: ";
    cin >> side;

    double squareArea = calculateSquareArea(side);

    cout << "\t\tArea of the square: " << squareArea << endl;

    // Calculate the area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    double rectangleArea = calculateRectangleArea(length, width);

    cout << "\t\tArea of the rectangle: " << rectangleArea << endl;

    // Calculate the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    double triangleArea = calculateTriangleArea(base, height);

    cout << "\t\tArea of the triangle: " << triangleArea << endl;

    // Calculate the area of a sphere
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    double sphereArea = calculateSphereArea(radius);

    cout << "\t\tArea of the sphere: " << sphereArea << endl;

    return 0;
}


