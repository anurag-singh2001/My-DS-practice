int solve(int n, vector<int> &dp)
{

    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];

    int res = n;
    for (int i = 1; i * i <= n; i++)
    {
        int temp = i * i;
        res = min(res, 1 + solve(n - temp, dp));
    }
    dp[n] = res;
    return dp[n];
}

int MinSquares(int n)
{
    // Code here
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}