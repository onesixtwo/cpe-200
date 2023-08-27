#include <iostream>
#include <math.h>

using namespace std;

float area(float a, float b, float c) {
  float s = (a + b + c) / 2;
  return sqrt(s * (s - a) * (s - b) * (s - c));
}

float perimeter(float a, float b, float c) {
  return a + b + c;
}

string triangleType(float a, float b, float c) {
  if (a < 90 && b < 90 && c < 90) {
    return "acute-angled";
  } else if (a >= 90 || b >= 90 || c >= 90) {
    return "obtuse-angled";
  } else {
    return "others";
  }
}

bool isValidTriangle(float a, float b, float c) {
  return (a + b > c && a + c > b && b + c > a);
}

int main() {
  int choice;
  float a, b, c;

  do {

    cout << "Select an operation: \n"
           << "1. area of triangle\n"
           << "2. perimeter of triangle\n"
           << "3. triangle type\n"
           << "4. exit\n";
    cout << ">>: ";
    cin >> choice;


    while (!cin.good()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "invalid input: ";
      cin >> choice;
    }

    switch (choice) {
      case 1:
        cout << "\nenter triangle angles\n";
        cout << "angle 1: ";
        cin >> a;
        cout << "angle 2: ";
        cin >> b;
        cout << "angle 3: ";
        cin >> c;

        if (!isValidTriangle(a, b, c)) {
          cout << "\nnot valid triangle\n" << endl;
          break;
        }

        cout << "\narea: " << area(a, b, c) << "\n" << endl;
        break;
      case 2:
        cout << "\nenter triangle angle\n";
        cout << "angle 1: ";
        cin >> a;
        cout << "angle 2: ";
        cin >> b;
        cout << "angle 3: ";
        cin >> c;

        if (!isValidTriangle(a, b, c)) {
          cout << "\nnot valid triangle\n" << endl;
          break;
        }

        cout << "\nperimeter: " << perimeter(a, b, c) << "\n" << endl;
        break;
      case 3:
        cout << "\nenter triangle angles\n";
        cout << "angle 1: ";
        cin >> a;
        cout << "angle 2: ";
        cin >> b;
        cout << "angle 3: ";
        cin >> c;

        if (!isValidTriangle(a, b, c)) {
          cout << "\nnot valid triangle\n" << endl;
          break;
        }

        cout << "\ntriangle is " << triangleType(a, b, c) << "\n" << endl;
        break;
      case 4:
        exit(0);
      default:
        cout << "invalid input!" << endl;
    }

  } while (choice != 4);

  return 0;
}
