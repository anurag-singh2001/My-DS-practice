long long trappingWater(int arr[], int n){
        // code here
        
        long long left=0,right=n-1,water=0;
        
        int maxLeft=arr[left];
        int maxRight=arr[right];
        
        while(left<right){
            if(arr[left]<arr[right]){
                left++;
                maxLeft=max(maxLeft,arr[left]);
                water+=(maxLeft-arr[left]);
            }
            else{
                right--;
                maxRight=max(maxRight,arr[right]);
                water+=(maxRight-arr[right]);
            }
        }
        return water;
    }