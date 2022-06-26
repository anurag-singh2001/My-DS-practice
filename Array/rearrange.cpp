void rearrange(long long *arr, int n)
{

    // Your code here
    long long *p = new long long[n];
    int low = 0, high = n - 1;
    int i = 0;
    if (n != 1)
    {

        while (low < high)
        {
            p[i++] = arr[high];
            p[i++] = arr[low];
            high--;
            low++;
            if (low == high)
            {
                p[i++] = arr[low];
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = p[i];
        }
    }
}