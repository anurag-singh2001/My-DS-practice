vector<int> leaders(int a[], int n)
{
    // Code here
    vector<int> v;
    int right = a[n - 1];
    v.push_back(right);
    for (int i = n - 2; i >= 0; i--)
    {
        if (right <= a[i])
        {
            right = a[i];
            v.push_back(right);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}