long long int dp[1001][1001];
long long int solve(int s[], int &m, int n, int p)
{

    if (n == 0)
        return 1;
    if (n < 0 or p == m)
        return 0;
    if (dp[n][p] != -1)
        return dp[n][p];
    long long int ans = 0;

    ans += solve(s, m, n - s[p], p);
    ans += solve(s, m, n, p + 1);

    return dp[n][p] = ans;
}

long long int count(int S[], int m, int n)
{

    // code here.
    memset(dp, -1, sizeof dp);
    return solve(S, m, n, 0);
}