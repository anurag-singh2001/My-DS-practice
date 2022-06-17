vector<long long> printFibb(int n)
{
    // code here
    vector<long long> dp(n);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
            dp[i] = 1;
        else
            dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp;
}