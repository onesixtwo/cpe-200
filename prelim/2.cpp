#include <iostream>
using namespace std;

int main() 
{
    double KtF, kelvin;
    
    cout << "enter temperature in Kelvin: ";
    cin >> kelvin;

    KtF = (kelvin - 273.15) * 9/5 + 32;

    cout << KtF; 

}
