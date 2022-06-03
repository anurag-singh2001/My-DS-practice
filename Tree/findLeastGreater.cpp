vector<int> findLeastGreater(vector<int> &arr, int n)
{
    set<int> s;
    vector<int> v(n, -1);
    s.insert(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        auto it = s.upper_bound(arr[i]);
        if (it != s.end())
            v[i] = *it;
        s.insert(arr[i]);
    }
    return v;
}