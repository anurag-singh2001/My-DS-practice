long long int numberOfPaths(int m, int n){

        // code here
        // recursion method
        // if(n==1 || m==1)
        //     return 1;
        // return numberOfPaths(n-1,m)+numberOfPaths(n,m-1);  
        
        // dynamic programming method
        long long int count[m][n];
        for(int i=0;i<m;i++)
            count[i][0]=1;
        for(int j=0;j<n;j++)
            count[0][j]=1;
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                count[i][j]=count[i-1][j]%1000000007+count[i][j-1]%1000000007;
            }
        }
        return count[m - 1][n - 1]%1000000007;
    }