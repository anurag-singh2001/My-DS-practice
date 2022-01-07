long long minCost(long long arr[], long long n)
{
    // Your code here
    priority_queue<long long, vector<long long>, greater<long long>> q(arr, arr + n);

    long long res = 0;
    while (q.size() > 1)
    {
        long long first = q.top();
        q.pop();
        long long second = q.top();
        q.pop();

        res += first + second;
        q.push(first + second);
    }

    return res;
}