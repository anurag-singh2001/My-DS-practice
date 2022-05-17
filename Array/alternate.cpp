void rearrange(int arr[], int n)
{
    // code here
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int i = 0, j = 0;
    while (i < n and j < pos.size() and j < neg.size())
    {
        arr[i] = pos[j];
        arr[i + 1] = neg[j];
        i += 2;
        j++;
    }
    while (j < pos.size())
    {
        arr[i] = pos[j];
        i++;
        j++;
    }
    while (j < neg.size())
    {
        arr[i] = neg[j];
        i++;
        j++;
    }
}