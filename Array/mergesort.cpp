void merge(int arr[], int l, int m, int r)
{
    // Your code here
    int i = l, j = m + 1, k = 0;
    int temp[r - l + 1];

    while (i <= m and j <= r)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= m)
    {
        temp[k++] = arr[i++];
    }

    while (j <= r)
    {
        temp[k++] = arr[j++];
    }

    for (k = l; k <= r; ++k)
    {
        arr[k] = temp[k - l];
    }
}

public:
void mergeSort(int arr[], int l, int r)
{
    // code here
    if (l >= r)
        return;
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}