vector<int> constructLowerArray(int *arr, int n)
{
    // code here
    ordered_set s;
    vector<int> v(n);
    s.insert(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        v[i] = s.order_of_key(arr[i]);
        s.insert(arr[i]);
    }
    return v;
}