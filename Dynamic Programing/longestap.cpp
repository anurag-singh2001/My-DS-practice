int lengthOfLongestAP(int A[], int n)
{
    // code here

    if (n <= 2)
        return n;
    int ans = 0;
    unordered_map<int, int> dp[n + 1];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int diff = A[i] - A[j];
            int c = 1;

            if (dp[j].count(diff))
                c = dp[j][diff];

            dp[i][diff] = 1 + c;
            ans = max(ans, dp[i][diff]);
        }
    }
    return ans;
}