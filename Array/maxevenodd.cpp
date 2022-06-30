int maxEvenOdd(int arr[], int n)
{
    // Your code here
    int c = 1;
    int max_c = 0;

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] % 2;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            c++;
        if (max_c < c)
            max_c = c;

        if (arr[i] == arr[i - 1])
            c = 1;
    }
    return max_c;
}