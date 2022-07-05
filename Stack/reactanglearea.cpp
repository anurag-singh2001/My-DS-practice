long long getMaxArea(long long arr[], int n)
{
    // Your code here
    stack<long long> s;
    long long res = 0;
    long long tp;
    long long curr;

    for (int i = 0; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] >= arr[i])
        {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? i : i - s.top() - 1);
            res = max(res, curr);
        }
        s.push(i);
    }
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
        res = max(res, curr);
    }

    return res;
}