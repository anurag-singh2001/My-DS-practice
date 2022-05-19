int smallestSubWithSum(int arr[], int n, int x)
{
    // Your code goes here
    int s = 0, l = 0, ans = n;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (s > x)
        {
            while (s - arr[l] > x)
                s -= arr[l++];
            ans = min(ans, i - l + 1);
        }
    }
    return ans;
}