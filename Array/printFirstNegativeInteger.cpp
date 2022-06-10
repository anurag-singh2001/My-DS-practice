vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k)
                                             
{
    long long firstNegativeIndex = 0;
    long long firstNegativeElement;
    vector<long long>v;
    for(long long i = k - 1; i < n; i++)
    {
       
        // skip out of window and positive elements
        while((firstNegativeIndex < i ) &&
              (firstNegativeIndex <= i - k ||
               arr[firstNegativeIndex] >= 0))
        {
            firstNegativeIndex ++;
        }
         
        // check if a negative element is found, otherwise use 0
        if(arr[firstNegativeIndex] < 0)
        {
            firstNegativeElement = arr[firstNegativeIndex];
        }
        else
        {
            firstNegativeElement = 0;
        }
        v.push_back(firstNegativeElement);
    }
    return v;
                                                 
 }