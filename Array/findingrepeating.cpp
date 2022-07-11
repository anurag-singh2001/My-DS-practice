pair<int, int> findRepeating(int *arr, int n)
{
    // code here
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto i : mp)
    {
        if (i.second > 1)
            return {i.first, i.second};
    }
    return {-1, -1};
}