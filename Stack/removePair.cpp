string removePair(string str)
{
    // Your code here
    stack<char> s;
    int n = str.length();
    s.push(str[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (!s.empty() and str[i] == s.top())
            s.pop();
        else
            s.push(str[i]);
    }
    string ans = "";
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    return ans;
}