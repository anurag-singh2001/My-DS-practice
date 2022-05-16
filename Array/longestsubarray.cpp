int longSubarrWthSumDivByK(int arr[], int n, int k)
{
    // Complete the function
    int ans = 0;
    unordered_map<int, int> mp;
    long long sum = 0;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + arr[i]) % k;
        if (sum < 0)
            sum = (sum + k) % k;
        if (mp.find(sum) != mp.end())
        {
            ans = max(i - mp[sum], ans);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return ans;
}