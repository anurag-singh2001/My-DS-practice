void dfs(int s, vector<int> &visited, stack<int> &st, vector<int> adj[])
{

    visited[s] = 1;
    for (int i : adj[s])
    {
        if (!visited[i])
            dfs(i, visited, st, adj);
    }
    st.push(s);
}

// Function to return list containing vertices in Topological order.
vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> visited(V, 0);
    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            dfs(i, visited, st, adj);
    }

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}