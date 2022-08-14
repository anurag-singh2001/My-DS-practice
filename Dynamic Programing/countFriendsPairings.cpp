int countFriendsPairings(int n)
{
    // code here
    long long dp[n + 1] = {0};
    long long mod = 1e9 + 7;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i < n + 1; i++)
    {
        dp[i] = dp[i - 1] + (i - 1) * dp[i - 2];
        dp[i] = dp[i] % mod;
    }
    return dp[n];
}