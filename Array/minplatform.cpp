int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    sort(arr, arr + n);
    sort(dep, dep + n);
    int j = 0;
    int s = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= dep[j])
            s++;
        else
            j++;
    }
    return s;
}