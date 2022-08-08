int nCrModp(int n, int r)
{

    // your code here
    long long mod = 1000000007;
    vector<vector<int>> dp(n + 1, vector<int>(r + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(i + 1, r); j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
            dp[i][j] %= mod;
        }
    }
    return dp[n][r] % mod;
}