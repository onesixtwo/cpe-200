#include <iostream>
using namespace std;

int a(int n) {
    if (n <= 1) {
        return n;
    }

    int* dp = new int[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    int w = dp[n];
    delete[] dp;
    return w;
}

int main() {
    int steps;
    cout << "enter the no. of steps: ";
    cin >> steps;

    int ways = a(steps);
    cout << "no. of ways to climb the staircase: " << ways << endl;

    return 0;
}
