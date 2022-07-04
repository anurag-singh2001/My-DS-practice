vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    // Your code here
    vector<long long int> ans(n, -1);
    if (n == 0 || n == 1)
    {
        ans.push_back(-1);
        return ans;
    }
    stack<pair<long long int, int>> st;
    st.push(make_pair(arr[0], 0));
    vector<pair<int, int>> v;
    for (int i = 1; i < n; i++)
    {
        while (arr[i] > st.top().first)
        {
            ans[st.top().second] = arr[i];
            st.pop();
            if (st.empty())
            {
                break;
            }
        }
        st.push(make_pair(arr[i], i));
    }
    return ans;
}