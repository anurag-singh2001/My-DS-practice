int findNumberOfTriangles(int arr[], int n)
{
    // code here
    sort(arr, arr + n);
    int c = 0;
    for (int i = n - 1; i >= 2; i--)
    {
        int temp = arr[i];
        int l = 0, r = i - 1;
        while (l < r)
        {
            if (arr[l] + arr[r] > temp)
            {
                c += r - l;
                r--;
            }
            else
                l++;
        }
    }
    return c;
}