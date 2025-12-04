#include <iostream>
using namespace std;
#define PI 3.14159265

class Area {
public:
    double area(double side) {
        return side * side;
    }
    double area(double length, double width) {
        return length * width;
    }
    double area(double radius, bool isCircle) {
        return PI * radius * radius;
    }
};

int main() {
    Area shape;

    double squareSide = 5.0;
    double rectLength = 6.0, rectWidth = 4.0;
    double circleRadius = 3.0;

    cout << "Area of square: " << shape.area(squareSide) << endl;
    cout << "Area of rectangle: " << shape.area(rectLength, rectWidth) << endl;
    cout << "Area of circle: " << shape.area(circleRadius, true) << endl;

    return 0;
}
