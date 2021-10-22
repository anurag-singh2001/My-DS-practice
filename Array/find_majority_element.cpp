int majorityElement(int a[], int size)
    {
        
        // your code here
        
        unordered_map<int,int>m;
    for(int i=0;i<size;i++)
        m[a[i]]++;
    int count=0;
    for(auto i:m){
        if(i.second>size/2){
            count=1;
            return i.first;
            break;
        }
    }
    
    return -1;
        
    }