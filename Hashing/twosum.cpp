bool keypair(vector<int> A, int N, int X)
    {
        // Your code goes here
        unordered_set<int> s;
        for(int i=0;i<N;i++){
            int temp=X-A[i];
            
            if(s.find(temp)!=s.end())
                return 1;
             s.insert(A[i]);    
        }
        return 0;
        
    }