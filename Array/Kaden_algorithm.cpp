long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxSum=arr[0];
        long long CurSum=0;
        
        for(int i=0;i<n;i++){
            CurSum=CurSum+arr[i];
            if(CurSum>maxSum)
                maxSum=CurSum;
            if(CurSum<0)
                CurSum=0;
        }
        
        return maxSum;
        
        
        
    }