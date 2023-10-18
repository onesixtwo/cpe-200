#include <iostream>
using namespace std;

int main()
{
   int a,b,c,d,e,f,g,h,i;
   int num4[5] = {4, 1, 5, 2, 3};

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

}
