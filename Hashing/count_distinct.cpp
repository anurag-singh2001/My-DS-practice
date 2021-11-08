vector<int> countDistinct(int A[], int n, int k)
{
    //code here.
    unordered_map<int, int> m;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < k; i++)
    {
        if (m[A[i]] == 0)
            count++;
        m[A[i]] += 1;
    }
    v.push_back(count);
    for (int i = k; i < n; i++)
    {
        if (m[A[i - k]] == 1)
            count--;
        m[A[i - k]] -= 1;
        if (m[A[i]] == 0)
            count++;
        m[A[i]] += 1;
        v.push_back(count);
    }
    return v;
}