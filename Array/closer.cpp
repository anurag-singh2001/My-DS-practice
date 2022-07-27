int binarysearch(int arr[], int l, int r, int x)
{

    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;
        if (mid > l and arr[mid - 1] == x)
            return mid - 1;
        if (mid < r and arr[mid + 1] == x)
            return mid + 1;
        if (arr[mid] > x)
            return binarysearch(arr, l, mid - 2, x);

        return binarysearch(arr, mid + 2, r, x);
    }
    return -1;
}

int closer(int arr[], int n, int x)
{
    // Your code here
    return binarysearch(arr, 0, n - 1, x);
}