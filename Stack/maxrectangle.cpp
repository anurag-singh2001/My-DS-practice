int largesthist(int arr[], int n)
{
    stack<int> result;
    int top_val;
    int max_area = 0;
    int area = 0;
    int i = 0;
    while (i < n)
    {
        if (result.empty() || arr[result.top()] <= arr[i])
            result.push(i++);

        else
        {
            top_val = arr[result.top()];
            result.pop();
            area = top_val * i;

            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }
    while (!result.empty())
    {
        top_val = arr[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);

        max_area = max(area, max_area);
    }
    return max_area;
}

int maxArea(int mat[MAX][MAX], int n, int m)
{
    // Your code here
    int res = largesthist(mat[0], m);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j])
                mat[i][j] += mat[i - 1][j];
        }
        res = max(res, largesthist(mat[i], m));
    }
    return res;
}