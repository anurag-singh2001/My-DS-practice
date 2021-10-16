static bool myCmp(Item &a,Item &b){
        double r1=(double)a.value/a.weight;
        double r2=(double)b.value/b.weight;
        return r1>r2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
       double res=0.0;
       int i=0;
        sort(arr,arr+n,myCmp);
        for( i=0;i<n;i++){
            if(arr[i].weight<=W){
                res+=arr[i].value;
                W=W-arr[i].weight;
            }
            else{
                res+=arr[i].value*((double)W/arr[i].weight);
                break;
            }
        }return res;
    }
        