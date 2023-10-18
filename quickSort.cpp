#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    int num[5] = {4, 1, 5, 2, 3};
    int temp2[5]; 
    int y = -1;

    cout << "array: ";
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;

    temp2[++y] = 0;
    temp2[++y] = 4;

    while (y >= 0) {
        a = temp2[y--];
        b = temp2[y--];
        
        c = num[a];
        d = (b - 1);

        for (e = b; e <= a - 1; e++) {
            if (num[e] < c) {
                d++;
                c = num[d];
                num[d] = num[e];
                num[e] = c;
            }
        }

        c = num[d + 1];
        num[d + 1] = num[a];
        num[a] = c;

        if (d - 1 > b) {
            temp2[++y] = b;
            temp2[++y] = d - 1;
        }

        if (d + 1 < a) {
            temp2[++y] = d + 1;
            temp2[++y] = a;
        }
    }

    cout << "array: ";
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;
}
