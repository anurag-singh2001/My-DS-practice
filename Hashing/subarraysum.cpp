int subArraySum(int arr[], int n, int sum)
{
    // Your code here
    unordered_map<int, int> map;
    int subarray = 0, presum = 0;
    map[0] = 1;

    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        subarray += map[presum - sum];
        map[presum]++;
    }
    return subarray;
}