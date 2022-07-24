void exchangeColumns(vector<vector<int>> &matrix)
{
    // code here
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
        swap(matrix[i][0], matrix[i][m - 1]);
}