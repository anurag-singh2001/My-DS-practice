int maxDistance(int arr[], int n)
    {
    //Code here
        unordered_map<int,int> mp;
        
        int max_d=0;
        
        for(int i=0;i<n;i++){
            if(mp.find(arr[i])==mp.end())
                mp[arr[i]]=i;
            else
                max_d=max(max_d,i-mp[arr[i]]);
        }
        
        return max_d;
    }