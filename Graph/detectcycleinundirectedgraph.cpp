bool isCyclicUtil(int v,bool visited[], int parent,vector<int> adj[]){
    visited[v] = true;
 
    
    for (int i:adj[v]){
        
        if (!visited[i]){
           if (isCyclicUtil(i, visited, v,adj))
              return true;
        }
 
        else if (i != parent)
           return true;
    }
    return false;
}
    
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
        visited[i] = false;
        
        for (int u = 0; u < V; u++){
       
        if (!visited[u])
          if (isCyclicUtil(u, visited, -1,adj))
             return true;
    }
    return false;
    }