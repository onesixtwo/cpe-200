#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,x2,y1,y2,xf,yf,distance;

    cout << "input x1: ";
    cin >> x1;

    cout << "input y1: ";
    cin >> y1;

    cout << "input x2: ";
    cin >> x2;

    cout << "input x2: ";
    cin >> y2;

    distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    cout << distance;

}