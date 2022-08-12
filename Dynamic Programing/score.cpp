ll count(ll n)
{
    // code here
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    int arr[3] = {3, 5, 10};

    for (int i = 0; i < 3; i++)
    {
        for (int j = arr[i]; j <= n; j++)
        {
            dp[j] = dp[j] + dp[j - arr[i]];
        }
    }
    return dp[n];
}