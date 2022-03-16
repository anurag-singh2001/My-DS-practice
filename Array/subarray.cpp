 vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        vector<int>v;
        int i=0,j=0;
        long long sum=0;
        while(j<n){
           sum+=arr[j];
           if(sum<s)
             j++;
           else if(sum==s){
               v.push_back(i+1);
               v.push_back(j+1);
               return v;
           } 
           else{
               while(sum>s){
                   sum-=arr[i];
                   i++;
               }
               if(sum==s)
                {
                  v.push_back(i+1);
               v.push_back(j+1);
                  return v;  
                }
                j++;
           }
        }
        v.push_back(-1);
        return v;
    }