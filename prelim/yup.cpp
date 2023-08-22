#include <iostream>

using namespace std;

int main()
{
    
    int n[3];
    int a,val,put,s;

    n[0] = 32;
    n[1] = 12;
    n[2] = 54;
   
    for(a=0; a < 3; a++)
        cout << n[a] <<" ";
       
    cout << "\nenter number: ";
    cin >> val;
    
    cout << "\nWhere to place?: ";
    cin >> put;
    
    n[put] = val;
    cout << "\nValues added";
    
    cout << "\n";
    for(a=0; a < 3; a++)
        cout << n[a] <<" "; 
        
    cout << "\nEnter number: ";
    cin >> s;
    
    for (a = 0; a < 3; a++)
        if (n[a] == s){
            cout << "Found in Array";
            cout << a;
            break;
            }
        if (a == 3){
            cout << "Not Found in Array";
        }

}