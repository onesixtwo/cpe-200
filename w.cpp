#include <iostream>
using namespace std;

class Triangle {
private:
    double tAngle, angleA, angleB, angleC;

public:

    Triangle(double A, double B, double C);
    
    void setAngles(double A, double B, double C);
    
    const bool validateTriangle();
};

Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    tAngle = A + B + C;
}

void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    tAngle = A + B + C;
}

const bool Triangle::validateTriangle() {
    return (tAngle <= 180);
}

int main() 
{
    Triangle set1(40, 30, 110);
    
    if (set1.validateTriangle()) {
        cout << "The shape is a valid triangle."; 
    } else {
        cout << "The shape is NOT a valid triangle.";
    
    }
}
