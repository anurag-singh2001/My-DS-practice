void dfs(vector<vector<char>> &g, int vis[][501], int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return;
    if (g[i][j] == '0')
        return;

    if (!vis[i][j])
    {
        vis[i][j] = 1;

        dfs(g, vis, i + 1, j, n, m);
        dfs(g, vis, i - 1, j, n, m);
        dfs(g, vis, i, j + 1, n, m);
        dfs(g, vis, i, j - 1, n, m);
        dfs(g, vis, i - 1, j - 1, n, m);
        dfs(g, vis, i + 1, j + 1, n, m);
        dfs(g, vis, i + 1, j - 1, n, m);
        dfs(g, vis, i - 1, j + 1, n, m);
    }
}
int numIslands(vector<vector<char>> &grid)
{
    // Code here
    int vis[501][501];
    memset(vis, 0, sizeof(vis));
    int count = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (vis[i][j] == 0 && grid[i][j] == '1')
            {
                count++;
                dfs(grid, vis, i, j, grid.size(), grid[0].size());
            }
        }
    }
    return count;
}