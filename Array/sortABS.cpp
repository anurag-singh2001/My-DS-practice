void sortABS(int a[], int n, int k)
{
    // Your code here
    int b[n];
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
        v[i].first = abs(k - a[i]);
        v[i].second = i;
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {

        a[i] = b[v[i].second];
    }
}