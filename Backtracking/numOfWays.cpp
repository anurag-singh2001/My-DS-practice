// Function to find out the number of ways we can place a black and a
// white Knight on this chessboard such that they cannot attack each other.

bool isValid(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m)
        return false;
    return true;
}

long long numOfWays(int n, int m)
{
    // write code here
    long long int count = 0, mod = 1e9 + 7, possible, ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            possible = n * m - 1;
            if (isValid(i + 1, j + 2, n, m))
                possible--;
            if (isValid(i + 1, j - 2, n, m))
                possible--;
            if (isValid(i - 1, j + 2, n, m))
                possible--;
            if (isValid(i - 1, j - 2, n, m))
                possible--;
            if (isValid(i - 2, j - 1, n, m))
                possible--;
            if (isValid(i - 2, j + 1, n, m))
                possible--;
            if (isValid(i + 2, j - 1, n, m))
                possible--;
            if (isValid(i + 2, j + 1, n, m))
                possible--;
            ans = (ans + possible) % mod;
        }
    }
    return ans % mod;
}