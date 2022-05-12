int kthElement(int arr1[], int arr2[], int n, int m, int k)
{
    int i = 0, j = 0, p = 0;
    int arr[m + n];
    while (i < n and j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr[p] = arr1[i];
            p++;
            i++;
        }
        else
        {
            arr[p] = arr2[j];
            j++;
            p++;
        }
    }
    while (i < n)
    {
        arr[p] = arr1[i];
        p++;
        i++;
    }
    while (j < m)
    {
        arr[p] = arr2[j];
        p++;
        j++;
    }
    return arr[k - 1];
}