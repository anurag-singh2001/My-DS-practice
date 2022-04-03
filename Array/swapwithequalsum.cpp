int findSwapValues(int A[], int n, int B[], int m)
	{
        // Your code goes here
        sort(A,A+n);
        sort(B,B+m);
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=A[i];
        }
        for(int i=0;i<m;i++){
            sum2+=B[i];
        }
        int i=0,j=0;
        while(i<n && j<m){
            if(sum1-A[i]+B[j]==sum2-B[j]+A[i]){
                return 1;
            }else if(sum1-A[i]+B[j]>sum2-B[j]+A[i]){
                i++;
            }else{
                j++;
            }
        }
        return -1;
            
	}