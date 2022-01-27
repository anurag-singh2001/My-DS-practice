bool valid(int arr[], int n, int day, int cap)
{
    int d = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > cap)
        {
            d++;
            sum = arr[i];
        }
    }
    return d <= day;
}

int leastWeightCapacity(int arr[], int N, int D)
{
    // code here
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    int low = *max_element(arr, arr + N);
    int high = sum;
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (valid(arr, N, D, mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}