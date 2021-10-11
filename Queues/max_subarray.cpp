 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int>v;
        multiset<int>s;
        
        for(int i=0;i<k-1;i++){
            s.insert(arr[i]);
        }
        
        int i=0;
        while(i+k-1!=n){
            s.insert(arr[i+k-1]);
            v.push_back(*s.rbegin());
            s.erase(s.find(arr[i]));
            i++;
        }
        
        return v;
    }