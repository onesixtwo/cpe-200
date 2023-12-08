#include <iostream>
using namespace std;

int findMax(int arr[], int low, int high) {
    if (low == high) {
        return arr[low];
    } else {
        int mid = (low + high) / 2;

        int leftMax = findMax(arr, low, mid); // Maximum in left subarray
        int rightMax = findMax(arr, mid + 1, high); // Maximum in right subarray

        return max(leftMax, rightMax);
    }
}

int main() {
    int arr[] = {10, 4, 7, 25, 17, 30, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, 0, n - 1);

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
