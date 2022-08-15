int solve(int *arr, int n)
{

    vector<int> dp(n, 0);
    dp[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        int inc = dp[i - 2] + arr[i];
        int exc = dp[i - 1] + 0;
        dp[i] = max(inc, exc);
    }
    return dp[n - 1];
}

int solve1(int *arr, int n)
{

    int prev2 = 0;
    int prev1 = arr[0];

    for (int i = 1; i < n; i++)
    {
        int inc = prev2 + arr[i];
        int exc = prev1 + 0;
        int ans = max(inc, exc);
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

// calculate the maximum sum with out adjacent
int findMaxSum(int *arr, int n)
{
    // code here
    // int res=solve(arr,n);
    // return res;
    int res = solve1(arr, n);
    return res;
}