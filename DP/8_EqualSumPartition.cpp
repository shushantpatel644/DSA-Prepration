#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int subset(int n, int arr[], int sum, vector<vector<int>> &dp)
    {

        if (n == 0)
            return 0;
        if (sum == 0)
            return 1;

        if (dp[n][sum] != -1)
            return dp[n][sum];

        if (arr[n - 1] <= sum)
        {
            return dp[n][sum] = subset(n - 1, arr, sum - arr[n - 1], dp) || subset(n - 1, arr, sum, dp);
        }
        else
            return dp[n][sum] = subset(n - 1, arr, sum, dp);
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
        }

        vector<vector<int>> dp(N + 1, vector<int>(sum / 2 + 1, -1));

        if (sum % 2 != 0)
        {
            return 0;
        }
        else if (sum % 2 == 0)
            return subset(N, arr, sum / 2, dp);
    }
};