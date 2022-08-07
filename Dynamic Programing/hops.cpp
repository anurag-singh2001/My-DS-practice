long long mod = 1000000007;

long long countWays(int n)
{
    // your code here
    vector<long long> dp(n + 1, -1);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] % mod + dp[i - 2] % mod + dp[i - 3] % mod;

    return dp[n] % mod;
}