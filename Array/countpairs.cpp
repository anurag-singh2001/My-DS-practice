long long countKdivPairs(int A[], int n, int K)
{
    // code here
    map<long long, long long> mp;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        long long rem = A[i] % K;
        if (rem == 0)
            ans += mp[rem];
        ans += mp[K - rem];
        mp[rem]++;
    }
    return ans;
}