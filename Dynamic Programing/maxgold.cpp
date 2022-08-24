int dp[51][51];

bool isvalid(int i, int j, int n, int m)
{

    if (i >= 0 and j >= 0 and i < n and j < m)
        return true;

    return false;
}

int solve(int i, int j, int n, int m, vector<vector<int>> &M)
{

    if (!isvalid(i, j, n, m))
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int ans = solve(i - 1, j + 1, n, m, M) + M[i][j];
    ans = max(ans, max(solve(i + 1, j + 1, n, m, M) + M[i][j], solve(i, j + 1, n, m, M) + M[i][j]));
    return dp[i][j] = ans;
}

int maxGold(int n, int m, vector<vector<int>> M)
{
    // code here
    memset(dp, -1, sizeof(dp));
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, solve(i, 0, n, m, M));
    }
    return ans;
}