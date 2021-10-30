void merge(int arr[], int l, int m, int r)
{
    // Your code here
    int i = l;
    int j = m + 1;
    int k = l;
    int b[r - l + 1];

    while (i <= m && j <= r)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }

    while (j <= r)
    {
        b[k] = arr[j];
        k++;
        j++;
    }

    while (i <= m)
    {
        b[k] = arr[i];
        k++;
        i++;
    }

    for (int i = l; i <= r; i++)
    {
        arr[i] = b[i];
    }
}

void mergeSort(int arr[], int l, int r)
{
    //code here
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}