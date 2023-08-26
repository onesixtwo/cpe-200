#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n[3];
    int a, val, put, s, ans;
    char as;

    n[0] = 32;
    n[1] = 12;
    n[2] = 54;

    while (true) {
        cout << "\nMenu: \n1. add a number \n2. search a number \n3. show records \n4. exit";
        cout << "\nEnter choice here: ";

        if (!(cin >> ans)) {
            cout << "\nerror\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (ans) {
            case 1:
                cout << "\nenter number: ";
                cin >> val;
            
                cout << "\nWhere to place?: ";
                cin >> put;

                n[put] = val;

                for(a=0; a < 3; a++)
                cout << n[a] <<" ";

                break;

            case 2:
                cout << "\nEnter number: ";
                cin >> s;

                for (a = 0; a < 3; a++)
                        if (n[a] == s){
                            cout << "Found in Array\n";
                            break;
                            }
                        if (a == 3){
                            cout << "Not Found in Array\n";
                        }

                break;

            case 3:
                for (a = 0; a < 3; a++)
                    cout << n[a] << " ";
                break;

            case 4:
                return 0;

            default:
                cout << "error\n";
        }
    }
}
