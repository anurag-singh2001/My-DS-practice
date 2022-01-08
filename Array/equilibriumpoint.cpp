 int equilibriumPoint(long long a[], int n) {
    
        // Your code here
       int sum=0;
       int leftsum=0;
       
       for(int i=0;i<n;i++){
           sum+=a[i];
       }
       for(int i=0;i<n;i++){
           sum-=a[i];
           if(sum==leftsum){
               return i+1;
           }
           leftsum+=a[i];
       }
       return -1;
            
    }
