int help(int n, int k, vector<vector<int>> &dp)
{
    if (k == 0 || k == 1)
        return dp[n][k] = 1;
    if (n == 1)
        return dp[n][k] = k;

    if (dp[n][k] != -1)
        return dp[n][k];
    int mn = INT_MAX;
    for (int i = 1; i <= k; i++)
    {
        int temp = 1 + max(help(n - 1, i - 1, dp), help(n, k - i, dp));
        mn = min(mn, temp);
    }
    return dp[n][k] = mn;
}

int eggDrop(int n, int k)
{
    // your code here
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
    return help(n, k, dp);
}