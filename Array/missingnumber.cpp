int missingNumber(int arr[], int n)
{

    bool p[n + 1] = {false};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] <= n)
        {
            p[arr[i]] = true;
        }
    }
    for (int i = 1; i <= n; i++)
        if (p[i] == false)
            return i;

    return n + 1;
}