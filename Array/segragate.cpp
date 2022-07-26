void segragate012(int arr[], int n)
{
    // Your Code Here
    int i = 0;
    int high = n - 1;
    int low = 0;

    while (i <= high)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[low]);
            i++;
            low++;
        }
        else if (arr[i] > 1)
        {
            swap(arr[i], arr[high]);
            high--;
        }
        else
            i++;
    }
}