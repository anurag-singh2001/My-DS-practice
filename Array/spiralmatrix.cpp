vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
    // code here
    int top = 0, left = 0, right = c - 1, bottom = r - 1;
    vector<int> v;
    if (c == 1)
    {
        for (int i = 0; i <= r - 1; i++)
            v.push_back(matrix[i][0]);
    }
    else if (r == 1)
    {
        for (int i = 0; i <= c - 1; i++)
            v.push_back(matrix[0][i]);
    }
    else
    {
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                v.push_back(matrix[top][i]);
            top++;
            for (int i = top; i <= bottom; i++)
            {
                v.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom)
            {
                for (int i = right; i >= left && top <= bottom; i--)
                {
                    v.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
        }
    }
    return v;
}