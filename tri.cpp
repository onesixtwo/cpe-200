#include <iostream>

using namespace std;

int main()
{
    double a, b, c, d;

    cout << "input triangle angles\n";
    cout << "angle 1: ";
    cin >> a;
    cout << "angle 2: ";
    cin >> b;
    cout << "angle 3: ";
    cin >> c;

    d = a + b + c;

    if (d != 180)
        cout << "not a valid triangle";
    else
        cout << "valid triangle";

}