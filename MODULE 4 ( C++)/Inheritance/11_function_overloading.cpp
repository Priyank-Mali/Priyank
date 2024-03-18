#include<iostream>
using namespace std;

class area{
public:
    float area(float length, float breadth) {
        return length * breadth;
    }

    float area(float base, float height, char triangle) {
        return 0.5 * base * height;
    }

    float area(float radius) {
        const float pi = 3.14159;
        return pi * radius * radius;
    }
};

int main() {
    area calculator;
    float length, breadth, base, height, radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    float areaRectangle = calculator.area(length, breadth);
    cout << "Area of rectangle: " << areaRectangle << endl;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    float areaTriangle = calculator.area(base, height, 'T');
    cout << "Area of triangle: " << areaTriangle << endl;

    cout << "Enter radius of circle: ";
    cin >> radius;
    float areaCircle = calculator.area(radius);
    cout << "Area of circle: " << areaCircle << endl;

    return 0;
}
