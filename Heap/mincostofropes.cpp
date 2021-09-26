long long minCost(long long arr[], long long n) {
        // Your code here
        
         priority_queue <long long,vector<long long>,greater<long long>> pq;
        long long res=0;
        
          for(int i=0;i<n;i++) 
            pq.push(arr[i]);
    
        while(pq.size()>=2){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            res+=first+second;
            pq.push(first+second);
        }
        return res;
        
        
    }