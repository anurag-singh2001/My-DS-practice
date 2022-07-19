int findMedian(int arr[], int n, int brr[], int m)
{
    // code here
    int begin = 0, end = n;
    while (begin <= end)
    {
        int i1 = (begin + end) / 2;
        int i2 = (n + m + 1) / 2 - i1;

        int min1 = (i1 == n) ? INT_MAX : arr[i1];
        int max1 = (i1 == 0) ? INT_MIN : arr[i1 - 1];
        int min2 = (i2 == m) ? INT_MAX : brr[i2];
        int max2 = (i2 == 0) ? INT_MIN : brr[i2 - 1];

        if (max1 <= min2 and max2 <= min1)
        {
            if ((n + m) % 2 == 0)
            {
                return ((double)(max(max1, max2) + min(min1, min2)) / 2);
            }
            else
            {
                return (max(max1, max2));
            }
        }
        else if (max1 > min2)
        {
            end = i1 - 1;
        }
        else
        {
            begin = i1 + 1;
        }
    }
}