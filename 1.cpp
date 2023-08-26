#include <iostream>
using namespace std;

int main() {
    int num1 = 5,num2 = 10;

    cout << "Before: " << num1 << "," << num2 << std::endl;

    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After: " << num1 << "," << num2 << std::endl;

    return 0;
}
