int longestLength(int arr[], int n)
{
    // Your code here
    int c = 1;
    int cmax = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            ++c;
        }
        else
        {
            cmax = max(c, cmax);
            c = 1;
        }
    }
    cmax = max(c, cmax);
    return cmax;
}