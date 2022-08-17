long long int mod = pow(10, 9) + 7;

long long add(int a, int b)
{
    return (a % mod + b % mod) % mod;
}

long long mul(int a, int b)
{
    return ((a % mod) * 1ll * (b % mod)) % mod;
}

long long solve(int n, int k)
{

    vector<long long> dp(n + 1, 0);
    dp[1] = k;
    dp[2] = add(k, mul(k, k - 1));

    for (int i = 3; i <= n; i++)
    {
        dp[i] = add(mul(dp[i - 2], k - 1), mul(dp[i - 1], k - 1));
    }
    return dp[n];
}

long long countWays(int n, int k)
{
    // code here

    return solve(n, k);
}