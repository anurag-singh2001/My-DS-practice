bool findPartition(int a[], int n)
{
    // code here
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    if (sum % 2 != 0)
        return false;
    sum /= 2;
    bool dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= n; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i - 1])
                dp[i][j] = dp[i][j] || dp[i - 1][j - a[i - 1]];
        }
    }
    return dp[n][sum];
}