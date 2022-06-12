vector<int> largestAndSecondLargest(int n, int arr[])
{

    /*********************************
     * Your code here
     * This function should return a
     * vector with first element as
     * max and second element as
     * second max
     * *******************************/
    int max = arr[0], max2 = -1;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max)
            max2 = arr[i];
    }
    v.push_back(max);
    v.push_back(max2);
    return v;
}