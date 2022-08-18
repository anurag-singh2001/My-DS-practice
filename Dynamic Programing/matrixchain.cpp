int solve(int arr[], int i, int j, int dp[][101])
{
    if (i >= j)
        return 0;
    int mn = INT_MAX;
    if (dp[i][j] != -1)
        return dp[i][j];
    for (int k = i; k < j; k++)
    {
        int temp = solve(arr, i, k, dp) + solve(arr, k + 1, j, dp) + (arr[i - 1] * arr[k] * arr[j]);
        if (temp < mn)
            mn = temp;
    }
    return dp[i][j] = mn;
}

int matrixMultiplication(int N, int arr[])
{
    // code here
    int dp[101][101];
    memset(dp, -1, sizeof(dp));
    return solve(arr, 1, N - 1, dp);
}