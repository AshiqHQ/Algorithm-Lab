#include <iostream>
#include <climits>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

// A helper function that returns the maximum profit obtainable
int getMaxProfit(int prices[], int n) {
    int dp[n+1];
    dp[0] = 0;  // profit for rod length 0 is 0

    // Build the table dp[] in bottom-up manner and return the last entry
    for (int i = 1; i <= n; i++) {
        int maxVal = INT_MIN;
        for (int j = 0; j < i; j++) {
            maxVal = max(maxVal, prices[j] + dp[i-j-1]);
        }
        dp[i] = maxVal;
    }

    return dp[n];
}

int main() {
    int prices[] = { 1, 5, 8, 9, 10, 17, 17, 20 };
    int len = sizeof(prices) / sizeof(prices[0]);
    cout << "Maximum Value is " << getMaxProfit(prices, len) << endl;
    return 0;
}
