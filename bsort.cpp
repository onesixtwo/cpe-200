
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    int num[5] = {4, 1, 5, 2, 3};
    
    cout << "array: ";
    
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;

    
    for (a = 0; a < 5; a++)
    {
        for(b = a+1; b < 5; b++)
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

    cout << "array: ";
    
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;
    
}



