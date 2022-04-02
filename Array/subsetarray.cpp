string isSubset(int a1[], int a2[], int n, int m)
{

    if (m > n)
        return "No";
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
        map[a1[i]]++;
    for (int i = 0; i < m; i++)
    {
        if (map.find(a2[i]) == map.end())
            return "No";
    }
    return "Yes";
}