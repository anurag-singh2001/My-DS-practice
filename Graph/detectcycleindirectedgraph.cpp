 bool isCyclicUtil(int v, bool visited[], bool *recStack,vector<int> adj[]){
        
        if(visited[v]==false){
            visited[v]=true;
            recStack[v]=true;
            for(int i:adj[v]){
                if(!visited[i]&&isCyclicUtil(i, visited, recStack,adj))
                    return true;
                else if(recStack[i])
                    return true;
            }
        }
        
        recStack[v]=false;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        bool *visited = new bool[V];
        bool *recStack = new bool[V];
        
        for(int i=0;i<V;i++){
            visited[i]=false;
            recStack[i]=false;
        }
        for(int i=0;i<V;i++){
            if (isCyclicUtil(i, visited, recStack,adj))
                return true;
        }
        
        return false;
    }