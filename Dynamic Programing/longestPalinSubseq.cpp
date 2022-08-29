int dp[1001][1001];

int solve(string s1, string s2, int m, int n)
{

    if (m == 0 or n == 0)
        return 0;

    if (dp[m][n] != -1)
        return dp[m][n];

    if (s1[m - 1] == s2[n - 1])
    {
        dp[m][n] = 1 + solve(s1, s2, m - 1, n - 1);
        return dp[m][n];
    }
    else
        dp[m][n] = max(solve(s1, s2, m, n - 1), solve(s1, s2, m - 1, n));

    return dp[m][n];
}

int longestPalinSubseq(string A)
{
    // code here
    string B = A;
    memset(dp, -1, sizeof(dp));
    reverse(B.begin(), B.end());
    int n = A.size();
    return solve(A, B, n, n);
}