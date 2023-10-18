#include <iostream>
using namespace std;

int main()
{
   int a,b,c,d,e,f,g,h,i;
   int num[5] = {4, 1, 5, 2, 3};

   cout << "array: ";
   for (a = 0; a < 5; a++)
      cout << num[a] << "\t";
   cout << endl;

   e = 5 / 2;
   while (e > 0)
   {
      for (f = e; f < 5; f++)
      {
         c = num[f];
         g = f;
         while (g >= e && num[g - e] > c)
         {
            num[g] = num[g - e];
            g = g - e;
         }
         num[g] = c;
      }
      e /= 2;
   }
   
   cout << "array: ";
   for (a = 0; a < 5; a++)
      cout << num[a] << "\t";
   cout << endl;

}
