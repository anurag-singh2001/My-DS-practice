int dp[16][16];
int help(int a, int b, int i, int j)
{
    if (i == a - 1 or j == b - 1)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    return dp[i][j] = help(a, b, i + 1, j) + help(a, b, i, j + 1);
}

// Function to find total number of unique paths.
int NumberOfPath(int a, int b)
{
    // code here
    memset(dp, -1, sizeof(dp));
    return help(a, b, 0, 0);
}