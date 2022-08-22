long long int optimalKeys(int N)
{
    // code here
    if (N <= 6)
        return N;

    vector<int> dp(N + 1);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 4;
    dp[5] = 5;
    dp[6] = 6;

    for (int i = 7; i <= N; i++)
    {
        for (int uniq = i - 3; uniq >= 1; uniq--)
        {
            int curr = dp[uniq] * (i - uniq - 1);
            if (curr > dp[i])
            {
                dp[i] = curr;
            }
        }
    }

    return dp[N];
}