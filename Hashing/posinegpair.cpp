 vector <int> findPairs(int arr[], int n) 
    {
        // code here
        vector<int> v;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int a=abs(arr[i]);
            if(m.find(a)!=m.end()){
                v.push_back(-1*a);
                v.push_back(a);
            }
            m[a]++;
        }
        return v;
    }