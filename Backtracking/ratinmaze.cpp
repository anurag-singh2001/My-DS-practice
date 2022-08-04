vector<string> ans;

bool isSafe(vector<vector<int>> &m, vector<vector<int>> &visited, int x, int y, int n)
{
    if (x >= 0 and y >= 0 and x < n and y < n and m[x][y] == 1 and visited[x][y] != 1)
        return true;

    return false;
}

void help(vector<vector<int>> &m, vector<vector<int>> &visited, int n, int x, int y, string temp)
{
    if (x == n - 1 and y == n - 1)
    {
        ans.push_back(temp);
    }

    visited[x][y] = 1;

    if (isSafe(m, visited, x + 1, y, n))
        help(m, visited, n, x + 1, y, temp + "D");

    if (isSafe(m, visited, x, y - 1, n))
        help(m, visited, n, x, y - 1, temp + "L");

    if (isSafe(m, visited, x, y + 1, n))
        help(m, visited, n, x, y + 1, temp + "R");

    if (isSafe(m, visited, x - 1, y, n))
        help(m, visited, n, x - 1, y, temp + "U");

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    // Your code goes here
    if (m[0][0] == 0)
        return ans;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    help(m, visited, n, 0, 0, "");
    return ans;
}