int getGCD(int a, int b)
{
    if (b == 0)
        return a;
    return getGCD(b, a % b);
}

int maxBinTreeGCD(vector<vector<int>> arr, int N)
{
    // code here
    int ans = 0, n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i][0] == arr[i - 1][0])
        {
            ans = max(ans, getGCD(arr[i][1], arr[i - 1][1]));
            i++;
        }
    }
    return ans;
}