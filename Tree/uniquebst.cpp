int mod = 1e9 + 7;
int numTrees(int N)
{
    // Your code here
    vector<long long> dp(N + 1, 1);
    for (int i = 2; i <= N; i++)
    {
        long long res = 0;
        for (int j = 1; j <= i; j++)
        {
            long long left = dp[j - 1] % mod;
            long long right = dp[i - j] % mod;
            res += (left * right) % mod;
        }
        dp[i] = res % mod;
    }
    return dp[N] % mod;
}