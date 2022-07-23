int minimumjumps(int arr[], int n)
{
    // code here
    int dp[n];

    dp[0] = 0;

    for (int i = 1; i < n; i++)
    {
        dp[i] = INT_MAX;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] + j >= i)
            {
                if (dp[j] != INT_MAX)
                {
                    dp[i] = min(dp[i], dp[j] + 1);
                }
            }
        }
    }

    return (dp[n - 1] == INT_MAX) ? -1 : dp[n - 1];
}