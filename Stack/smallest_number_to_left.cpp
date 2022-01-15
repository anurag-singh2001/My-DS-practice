vector<int> leftSmaller(int n, int a[])
{
    // code here
    stack<int> s;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && s.top() >= a[i])
            s.pop();

        if (s.empty())
            v.push_back(-1);
        else
            v.push_back(s.top());
        s.push(a[i]);
    }
    return v;
}