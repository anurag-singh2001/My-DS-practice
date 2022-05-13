vector<int> maximizeArray(int arr1[], int arr2[], int n)
{
    // code here
    vector<int> v;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr2[i]) == s.end())
        {
            v.push_back(arr2[i]);
            s.insert(arr2[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr1[i]) == s.end())
        {
            v.push_back(arr1[i]);
            s.insert(arr1[i]);
        }
    }

    sort(v.begin(), v.end());
    s.clear();

    int i = v.size() - 1;
    while (s.size() != n)
    {
        s.insert(v[i--]);
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr2[i]) != s.end())
        {
            s.erase(arr2[i]);
            ans.push_back(arr2[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr1[i]) != s.end())
        {
            s.erase(arr1[i]);
            ans.push_back(arr1[i]);
        }
    }

    return ans;
}