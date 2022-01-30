int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        // Your code goes here
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               if(i-1>=0)
                    mat[i][j]+=mat[i-1][j];
               if(j-1>=0)
                    mat[i][j]+=mat[i][j-1];
                if(i-1>=0 && j-1>=0)
                    mat[i][j]-=mat[i-1][j-1];
           }
       }
       
       int res=INT_MIN;
       for(int i=0;i<N;i++){
           for(int j=0;j<N;j++){
               int temp=mat[i][j];
               if(i-K>=0)
                    temp-=mat[i-K][j];
                if(j-K>=0)
                    temp-=mat[i][j-K];
                if(i-K>=0 && j-K>=0)
                    temp+=mat[i-K][j-K];
                res=max(res,temp);    
           }
       }
       return res;
    }  