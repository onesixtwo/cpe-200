#include <iostream>
using namespace std;

int main()
{
   int a, b, d, e, f, g, h, i;
   int num[5] = {4, 1, 5, 2, 3};
   int temp[5];
   int c = 1;
   cout << "array: \n";

   for (a = 0; a < 5; a++)
      cout << num[a] << "\t";
   cout << endl;

    
   while (c < 5)
   {
      for (a = 0; a < 5; a += 2 * c)
      {
         d = a;
         e = a + c;
         f = a + 2 * c;

         if (e > 5)
            e = 5;
         if (f > 5)
            f = 5;

         g = d;
         h = e;

         for (b = d; b < f; b++)
         {
            if (g < e && (h >= f || num[g] <= num[h]))
               {
                  temp[b] = num[g];
                  g++;
               }
               else
               {
                  temp[b] = num[h];
                  h++;
               }
         }
      }

      for (a = 0; a < 5; a++)
         num[a] = temp[a];

      c *= 2;
   }

   cout << "array: \n";
   for (a = 0; a < 5; a++)
      cout << num[a] << "\t";
   cout << endl;
}
