#include <iostream>
using namespace std;

int main()
{
      int a,b,c,d;
      int num[5] = {4, 1, 5, 2, 3};

      cout << "array: \n";
      for (a = 0; a < 5; a++)
         cout << num[a] << "\t";
      cout << endl;

      for (a = 0; a < 5; a++)
      {  
         c = num[a];
         b = a-1;
         while (b >= 0 && num[b] > c)
         {
            num[b+1] = num[b];
            b = b-1;
         }
         num[b+1] = c;
      }

      cout << "array: \n";
      for (a = 0; a < 5; a++)
         cout << num[a] << "\t";
      cout << endl;

}