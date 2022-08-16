int cutRod(int price[], int n)
{
    // code here
    int dp[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            dp[i] = max(dp[i], price[j] + dp[i - j - 1]);
        }
    }
    return dp[n];
}