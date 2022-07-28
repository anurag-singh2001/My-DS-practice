int countNonRepeated(int arr[], int n)
{
    // Your code here
    unordered_map<int, int> m;
    int c = 0;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    for (auto x : m)
        if (x.second == 1)
            c++;

    return c;
}