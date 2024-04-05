#include <iostream>
#include <cmath>

using namespace std;

// Enum to represent different shapes
enum ShapeType {
    RECTANGLE,
    CIRCLE
};

// Struct to represent a rectangle
struct Rectangle {
    double length;
    double width;
};

// Struct to represent a circle
struct Circle {
    double radius;
};

// Union to represent different shapes
union Shape {
    Rectangle rectangle;
    Circle circle;
};

// Struct to hold information about a shape
struct ShapeInfo {
    ShapeType type;
    Shape shape;
};

int main() {
    // Create a rectangle
    ShapeInfo shapeInfo1;
    shapeInfo1.type = RECTANGLE;
    shapeInfo1.shape.rectangle.length = 5.0;
    shapeInfo1.shape.rectangle.width = 3.0;

    // Create a circle
    ShapeInfo shapeInfo2;
    shapeInfo2.type = CIRCLE;
    shapeInfo2.shape.circle.radius = 2.5;

    // Display information about the rectangle
    if (shapeInfo1.type == RECTANGLE) {
        cout << "Rectangle Area: " << shapeInfo1.shape.rectangle.length * shapeInfo1.shape.rectangle.width << "\n";
    }
    else{
        cout << "Not matched " << endl;
    }

    // Display information about the circle
    if (shapeInfo2.type == CIRCLE) {
        cout << "Circle Area: " << M_PI * pow(shapeInfo2.shape.circle.radius, 2) << "\n";
    }
    else{
        cout << "not mathced" << endl;
    }

    return 0;
}
