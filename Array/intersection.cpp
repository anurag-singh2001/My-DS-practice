vector<int> printIntersection(int arr1[], int arr2[], int n, int m)
{
    // Your code here
    vector<int> v;
    int i = 0, j = 0;

    while (i < n and j < m)
    {
        if ((i > 0 and arr1[i] == arr1[i - 1]) or arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v;
}