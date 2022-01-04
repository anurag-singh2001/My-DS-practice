
bool ispossible(vector<int> &stalls, int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = stalls[0];
    
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(),stalls.end());
    int s=0;
    int l=stalls.size();
    int h=stalls[l-1];
    int ans=-1;
    int mid=s+(h-s)/2;
    while(s<=h){
        if(ispossible(stalls,k,mid,l)){
            ans=mid;
            s=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=s+(h-s)/2;
    }
    return ans;
}