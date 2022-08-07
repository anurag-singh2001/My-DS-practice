bool solve(vector<vector<int>> &ans, vector<int> mat[], int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    if (i == n - 1 and j == m - 1)
    {
        ans[i][j] = 1;
        return true;
    }
    if (mat[i][j] == 0)
        return false;
    ans[i][j] = 1;

    for (int k = 1; k <= mat[i][j]; k++)
    {
        if (j + k < m)
            if (solve(ans, mat, i, j + k, n, m))
                return true;
        if (i + k < n)
            if (solve(ans, mat, i + k, j, n, m))
                return true;
    }
    ans[i][j] = 0;
    return false;
}

void solve(int n, vector<int> matrix[])
{
    // write code here

    vector<vector<int>> ans(n, vector<int>(n, 0));

    if (solve(ans, matrix, 0, 0, n, n))
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }

    else
        cout << -1 << endl;
}