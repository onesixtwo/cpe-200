#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int num[5] = {4, 1, 5, 2, 3};
    
    cout << "array: ";
    
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;

    int stack[5]; 
    int top = -1;

    stack[++top] = 0;
    stack[++top] = 4;

    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];
        
        int pivot = num[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (num[j] < pivot) {
                i++;
                c = num[i];
                num[i] = num[j];
                num[j] = c;
            }
        }

        c = num[i + 1];
        num[i + 1] = num[high];
        num[high] = c;

        if (i - 1 > low) {
            stack[++top] = low;
            stack[++top] = i - 1;
        }

        if (i + 1 < high) {
            stack[++top] = i + 1;
            stack[++top] = high;
        }
    }

    cout << "array: ";
    
    for (a = 0; a < 5; a++)
        cout << num[a] << "\t";
    cout << endl;
}
