vector<vector<int>> printGraph(int V, vector<int> adj[])
{
    // Code here
    vector<vector<int>> res;
    for (int i = 0; i < V; i++)
    {
        vector<int> temp;
        temp.push_back(i);
        for (auto j : adj[i])
        {
            temp.push_back(j);
        }
        res.push_back(temp);
    }
    return res;
}