string removeConsecutiveDuplicates(string s)
{
    // Your code here
    string ans;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            ans.push_back(st.top());
        }
        else if (st.top() != s[i])
        {
            st.push(s[i]);
            ans.push_back(st.top());
        }
    }
    return ans;
}