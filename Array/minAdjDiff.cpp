int minAdjDiff(int arr[], int n)
{
    // Your code here
    int min_diff = abs(arr[n - 1] - arr[0]), curr_sum = 0;
    for (int i = 1; i < n; i++)
    {
        curr_sum = abs(arr[i] - arr[i - 1]);
        if (curr_sum < min_diff)
            min_diff = curr_sum;
    }
    return min_diff;
}