static bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.second == b.second)
        return a.first < b.first;

    return a.second > b.second;
}

vector<int> sortthemap(map<int, int> &m)
{

    vector<pair<int, int>> v1;
    for (auto &i : m)
    {
        v1.push_back(i);
    }
    sort(v1.begin(), v1.end(), comp);
    vector<int> v2;

    for (auto &k : v1)
    {
        while (k.second--)
            v2.push_back(k.first);
    }
    return v2;
}

vector<int> sortByFreq(int arr[], int n)
{
    // Your code here
    map<int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    v = sortthemap(mp);
    return v;
}