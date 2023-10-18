#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,c,d,e;
    int num[5] = {4, 1, 5, 2, 3};
    
    cout << "array: \n";
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;

    for (a = 0; a < 5; a++)
    {
      int sm1 = num[a];
      int sm2 = a;
      for (e = a+1; e < 5; e++)
      {
         if(num[e]<sm1)
         {
            sm1 = num[e];
            sm2 = e;
         }
      }
      swap(num[a],num[sm2]);
    }
    cout << "Selection sorted array: \n";
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;

}