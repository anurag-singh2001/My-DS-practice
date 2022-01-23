vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    // your code here

    deque<int> q(k);
    vector<int> v;
    int i;
    for (i = 0; i < k; ++i)
    {
        while ((!q.empty()) && arr[i] >= arr[q.back()])
            q.pop_back();

        q.push_back(i);
    }
    for (; i < n; ++i)
    {
        v.push_back(arr[q.front()]);
        while ((!q.empty()) && q.front() <= i - k)
            q.pop_front();

        while ((!q.empty()) && arr[i] >= arr[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    v.push_back(arr[q.front()]);

    return v;
}