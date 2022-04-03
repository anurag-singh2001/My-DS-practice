vector<pair<int, int>> allPairs(int A[], int B[], int N, int M, int X)
{
    // Your code goes here
    vector<pair<int, int>> v;
    set<int> s;
    for (int i = 0; i < M; i++)
        s.insert(B[i]);
    for (int i = 0; i < N; i++)
    {
        int a = A[i];
        int b = X - a;
        if (s.find(b) != s.end())
            v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    return v;
}