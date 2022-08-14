long long maximumAmount(int arr[], int n)
{
    // Your code here
    vector<long long> p1(n + 3, 0), p2(n + 3, 0), p3(n + 3, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (i <= j)
            {
                long long x = arr[i] + min(p3[j + 1], p2[j]);
                long long y = arr[j] + min(p2[j], p1[j - 1]);
                p1[j + 1] = max(x, y);
            }
        }
        p3 = p2, p2 = p1;
    }
    return p2[n];
}