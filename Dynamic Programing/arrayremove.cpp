int solve(vector<int> &a, int k, int i, int j, vector<vector<int>> &dp)
{

    if (i >= j)
        return 0;
    if (a[j] - a[i] <= k)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    return dp[i][j] = 1 + min(solve(a, k, i + 1, j, dp), solve(a, k, i, j - 1, dp));
}

int removals(vector<int> &a, int k)
{
    // Code here

    sort(a.begin(), a.end());
    int sze = a.size();
    vector<vector<int>> dp(sze, vector<int>(sze, -1));

    return solve(a, k, 0, a.size() - 1, dp);
}