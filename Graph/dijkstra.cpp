vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dis(V,INT_MAX);
        dis[S]=0;
        priority_queue<pair<int,int>>pq;
        pq.push({0,S});
        while(!pq.empty()){
            int node=pq.top().second;
            pq.pop();
            for(int i=0;i<adj[node].size();i++){
                int res=adj[node][i][0];
                int wt=adj[node][i][1];
                if(wt+dis[node]<dis[res]){
                    dis[res]=wt+dis[node];
                    pq.push({-1*dis[res],res});
                }
            }
        }
        return dis;
    }