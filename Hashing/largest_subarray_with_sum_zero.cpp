int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int> m;
    
    int sum=0;
    int max_len=0;
    
    for(int i=0;i<n;i++){
        sum+=A[i];
        
        if(A[i]==0 && max_len==0)
            max_len=1;
        if(sum==0)
           max_len=1+i;
        
        if(m.find(sum)!=m.end())
            max_len=max(max_len,i-m[sum]);
        else
            m[sum]=i;
    }
    return max_len;
    }