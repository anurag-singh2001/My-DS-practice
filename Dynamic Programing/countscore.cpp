long long numWays(long long n, int ch, long long dp[][3], int choice[])
{
    if (n == 0)
        return 1;
    if (ch < 0 || n < 0)
        return 0;
    if (dp[n][ch] != -1)
        return dp[n][ch];

    long long take = numWays(n - choice[ch], ch, dp, choice);
    long long skip = numWays(n, ch - 1, dp, choice);

    return dp[n][ch] = take + skip;
}

long long int count(long long int n)
{
    int ch[3] = {3, 5, 10};
    long long dp[n + 1][3];
    memset(dp, -1, sizeof(dp));

    return numWays(n, 2, dp, ch);
}