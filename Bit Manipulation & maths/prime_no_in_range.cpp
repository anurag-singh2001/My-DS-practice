vector<int> primeRange(int M, int N)
{
    // code here
    vector<int> v;
    bool arr[N + 1];
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    for (int i = 2; i * i <= N; i++)
    {
        for (int j = 2 * i; j <= N; j += i)
        {
            arr[j] = false;
        }
    }
    for (int i = M; i <= N; i++)
    {
        if (arr[i])
            v.push_back(i);
    }
    return v;