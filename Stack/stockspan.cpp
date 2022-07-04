vector<int> calculateSpan(int arr[], int n)
{
    // Your code here
    stack<int> s;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() and arr[s.top()] <= arr[i])
            s.pop();

        if (s.empty())
            ans.push_back(i + 1);
        else
        {
            int top = s.top();
            ans.push_back(i - top);
        }
        s.push(i);
    }

    return ans;
}