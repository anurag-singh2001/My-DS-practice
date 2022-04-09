int toyCount(int N, int K, vector<int> arr)
{
    // code here
    int s = 0;
    int c = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i <= N - 1; i++)
    {
        s = arr[i] + s;
        if (s > K)
            break;
        c++;
    }
    return c;
}