vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    // code here
    priority_queue<int> pq;
    for (int i = 0; i < K; i++)
        for (int j = 0; j < K; j++)
            pq.push(arr[i][j]);
    vector<int> ans;
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}