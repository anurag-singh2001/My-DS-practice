long long merge(long long *arr, long long *temp, long long l, long long mid, long long r){
      long long i,j,k;
      long long inv_cnt = 0;
      
      i = l;
      j = mid;
      k = l;
      
      while((i <= mid - 1) && (j<=r)){
          if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];}
          else{
              temp[k++] = arr[j++];
              
              inv_cnt += (mid - i);
          }
      }
      
      while(i<=mid-1){
        temp[k++] = arr[i++];}
        
      while(j<=r){
        temp[k++] = arr[j++];}
    
        for(int i = l; i<=r;i++){
            arr[i] = temp[i];}
        
        return inv_cnt;
      
  }
    
    long long mergeSort(long long *arr,long long *temp,long long l,long long r){
        long long mid;
        long long c=0;
        
        if(r>l){
            mid=(l+r)/2;
            c+=mergeSort(arr,temp,l,mid);
            c+=mergeSort(arr,temp,mid+1,r);
            c+=merge(arr,temp,l,mid+1,r);
        }
        return c;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long temp[N];
        long long ans=mergeSort(arr,temp,0,N-1);
        return ans;
    }
