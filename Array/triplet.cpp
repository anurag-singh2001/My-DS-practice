long long countTriplets(long long arr[], int n, long long sum)
{
    // Your code goes here
    int c = 0;
    sort(arr, arr + n);
    for (int k = 0; k < n - 2; k++)
    {
        int i = k + 1;
        int j = n - 1;
        while (i < j)
        {
            int s = arr[i] + arr[j] + arr[k];
            if (s < sum)
            {
                c += j - i;
                i++;
            }
            else
                j--;
        }
    }
    return c;
}