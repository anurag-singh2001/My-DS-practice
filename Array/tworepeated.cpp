vector<int> twoRepeated(int arr[], int N)
{
    // Your code here
    int a[N + 1] = {0};
    vector<int> v;
    for (int i = 0; i < N + 2; i++)
    {
        a[arr[i]]++;
        if (a[arr[i]] == 2)
            v.push_back(arr[i]);
    }
    return v;
}