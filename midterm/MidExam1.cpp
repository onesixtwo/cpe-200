#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num[10] = {9945, 3118, 3399, 2001, 9983, 8641, 2557, 8742, 5957, 315};
    int a,b,c,d;
    int search, ans;

    while (true) {
        cout << "\nMenu: \n\n1. Sorting \n2. Searching` \n3. Exit ";
        cout << "\n\nEnter choice here: ";

        if (!(cin >> ans)) {
            cout << "\nerror\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (ans) {
            case 1:
                cout << "unsorted array: \n";
    
               for (a = 0; a < 10; a++)
                  cout << num[a] << "\t";
               cout << endl;

               
               for (a = 0; a < 10; a++)
               {
                  for(b = a+1; b < 10; b++)
                  {
                        if (num[b] < num[a])
                        {
                           c = num[a];
                           num[a] = num[b];
                           num[b] = c;
                        }
                  }
               d++;
               }

               cout << "sorted array using bubble sort: \n";
               
               for (a = 0; a < 10; a++)
                  cout << num[a] << "\t";
               cout << endl;

                break;

            case 2:
                cout << "\nEnter number: ";
                cin >> search;

                for (a = 0; a < 10; a++)
                        if (num[a] == search){
                            cout << "Number found in Array at index: " << a << "\n";
                            break;
                            }
                        if (a == 10){
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
