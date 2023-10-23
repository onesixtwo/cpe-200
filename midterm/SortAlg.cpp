#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h;
    int num1[5] = {9, 2, 19, 22, 50};
    int num2[5] = {1, 43, 48, 37, 28};
    int num3[5] = {35, 22, 28, 29, 30};
    int num4[5] = {42, 16, 41, 44, 33};
    int num5[5] = {36, 8, 31, 39, 4};
    int num6[5] = {12, 44, 34, 26, 14};
    int temp[5];
    int temp2[5];
    int z = 1;
    int y = -1;
    int ans;

    while (true) {
        cout << "\nSearching Menu: \n\n1. Bubble Sort \n2. Selection Sort \n3. Insertion Sort \n4. Shell Sort \n5. Merge Sort \n6. Quick sort \n7. Exit ";
        cout << "\n\nEnter choice here: ";

        if (!(cin >> ans)) {
            cout << "\nerror\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (ans) {
            case 1:

               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num1[a] << "\t";
               cout << endl;

               for (a = 0; a < 5; a++)
               {
                  for(b = a+1; b < 5; b++)
                  {
                     if (num1[b] < num1[a])
                     {
                        c = num1[a];
                        num1[a] = num1[b];
                        num1[b] = c;
                     }
                  }
               d++;
               }

               cout << "bubble sorted array: \n";
               for (a = 0; a < 5; a++)
                  cout << num1[a] << "\t";
               cout << endl;
               break;

            case 2:

               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num2[a] << "\t";
               cout << endl;

               for (a = 0; a < 5; a++)
               {  
                  c = num2[a];
                  b = a-1;
                  while (b >= 0 && num2[b] > c)
                  {
                     num2[b+1] = num2[b];
                     b = b-1;
                  }
                  num2[b+1] = c;
               }

               cout << "insertion sorter array: \n";
               for (a = 0; a < 5; a++)
                  cout << num2[a] << "\t";
               cout << endl;
               break;

            case 3:

               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num3[a] << "\t";
               cout << endl;

               for (a = 0; a < 5; a++)
               {
                  int sm1 = num3[a];
                  int sm2 = a;
                  for (e = a+1; e < 5; e++)
                  {
                     if(num3[e]<sm1)
                     {
                        sm1 = num3[e];
                        sm2 = e;
                     }
                  }
                  swap(num3[a],num3[sm2]);
               }

               cout << "Selection sorted array: \n";
               for (a = 0; a < 5; a++)
                  cout << num3[a] << "\t";
               cout << endl;

               break;

            case 4:
               
               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num4[a] << "\t";
               cout << endl;

               e = 5 / 2;
               while (e > 0)
               {
                  for (f = e; f < 5; f++)
                  {
                     c = num4[f];
                     g = f;
                     while (g >= e && num4[g - e] > c)
                     {
                        num4[g] = num4[g - e];
                        g = g - e;
                     }
                     num4[g] = c;
                  }
                  e /= 2;
               }
               
               cout << "shell sorted array: \n";
               for (a = 0; a < 5; a++)
                  cout << num4[a] << "\t";
               cout << endl;

               break;

            case 5:
               
               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num5[a] << "\t";
               cout << endl;

               while (z < 5)
               {
                  for (a = 0; a < 5; a += 2 * z)
                  {
                     d = a;
                     e = a + z;
                     f = a + 2 * z;

                     if (e > 5)
                        e = 5;
                     if (f > 5)
                        f = 5;

                     g = d;
                     h = e;

                     for (b = d; b < f; b++)
                     {
                        if (g < e && (h >= f || num5[g] <= num5[h]))
                        {
                           temp[b] = num5[g];
                           g++;
                        }
                        else
                        {
                           temp[b] = num5[h];
                           h++;
                        }
                     }
                  }

                  for (a = 0; a < 5; a++)
                     num5[a] = temp[a];

                  z *= 2;
               }

               cout << "merge sorted array: \n";
               for (a = 0; a < 5; a++)
                  cout << num5[a] << "\t";
               cout << endl;

               break;

            case 6:

               cout << "array: \n";
               for (a = 0; a < 5; a++)
                  cout << num6[a] << "\t";
               cout << endl;

               temp2[++y] = 0;
               temp2[++y] = 4;

               while (y >= 0) {
                  a = temp2[y--];
                  b = temp2[y--];
                  
                  c = num6[a];
                  d = (b - 1);

                  for (e = b; e <= a - 1; e++) {
                        if (num6[e] < c) {
                           d++;
                           c = num6[d];
                           num6[d] = num6[e];
                           num6[e] = c;
                        }
                  }

                  c = num6[d + 1];
                  num6[d + 1] = num6[a];
                  num6[a] = c;

                  if (d - 1 > b) {
                        temp2[++y] = b;
                        temp2[++y] = d - 1;
                  }

                  if (d + 1 < a) {
                        temp2[++y] = d + 1;
                        temp2[++y] = a;
                  }
               }

               cout << "quick sorted array: \n";
               for (a = 0; a < 5; a++)
                  cout << num6[a] << "\t";
               cout << endl;

               break;

            case 7:

               return 0;

            default:
                cout << "**Error Try Again**\n";
        }
    }
}
