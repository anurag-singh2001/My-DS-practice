bool findTriplets(int arr[], int n)
{
    // Your code here
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];

        while (l < r)
        {
            if (x + arr[l] + arr[r] == 0)
            {
                l++;
                r--;
                return 1;
                break;
            }

            else if (x + arr[l] + arr[r] < 0)
                l++;
            else
                r--;
        }
    }
    return 0;
}