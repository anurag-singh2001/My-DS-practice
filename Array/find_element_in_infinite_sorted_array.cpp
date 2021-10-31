searchInfinite(int a[],int key){
    int low=0;
    int high=1;

    while(a[high]<key){
        low=high;
        high=2*high;
    }

    return binarySearch(a,key,low,high); // simple binary search function
    
}