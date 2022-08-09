cpp_int findCatalan(int n)
{
    // code here
    cpp_int dp[n + 1];
    dp[0] = 1, dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j] * dp[i - 1 - j];
        }
    }
    return dp[n];
}