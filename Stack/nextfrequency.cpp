vector<int> print_next_greater_freq(int arr[], int n)
{
    // code here
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    vector<int> v(n, -1);
    stack<int> s;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && m[arr[s.top()]] < m[arr[i]])
        {
            v[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }
    return v;
}