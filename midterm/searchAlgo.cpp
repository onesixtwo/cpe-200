#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n[7] = {1,2,3,4,5,6,7};
    string m[5] = {"taylor","elizabeth","jane","angelina","anna"};
    string Lsearch;
    int a, Bsearch, ans;

    while (true) {
        cout << "\nSearching Menu: \n\n1. Linear Searching \n2. Binary Searching \n3. Exit ";
        cout << "\n\nEnter choice here: ";

        if (!(cin >> ans)) {
            cout << "\nerror\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (ans) {
            case 1:
                cout << "\nEnter Name: ";
                cin >> Lsearch;

                for (a = 0; a < 5; a++)
                        if (Lsearch == m[a]){
                            cout << "Name found in Array at index: " << a << "\n";
                            break;
                            }
                        if (a == 5){
                            cout << "**Name Not Found**\n";
                        }

                break;

            case 2:
                cout << "\nEnter number: ";
                cin >> Bsearch;

                for (a = 0; a < 7; a++)
                        if (n[a] == Bsearch){
                            cout << "Number found in Array at index: " << a << "\n";
                            break;
                            }
                        if (a == 7){
                            cout << "**Number Not Found**\n";
                        }

                break;

            case 3:

                return 0;

            default:
                cout << "**Error Try Again**\n";
        }
    }
}