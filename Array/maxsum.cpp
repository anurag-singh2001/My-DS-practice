int maximumSum( int n,int m, vector<vector<int>> &a) {

    // Complete the function
   int prev = *max_element(&a[n-1][0],&a[n-1][m-1] + 1);
    int sum=prev;
    for(int i=n-2;i>=0;i--){
        int s=INT_MIN;
        for(int j=m-1;j>=0;j--){
            if(a[i][j]<prev && a[i][j]>s)
                s=a[i][j];
        }
        
        if(s==INT_MIN)
            return 0;
        prev=s;
        sum+=s;
        
    }
    return sum;
    
    
}