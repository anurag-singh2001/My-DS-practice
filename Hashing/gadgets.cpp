vector<int> TopK(vector<int> &array, int k)
{
    // code here
    map<int, int> m;
    for (int i = 0; i < array.size(); i++)
        m[array[i]]++;

    vector<pair<int, int>> v;

    for (auto i : m)
        v.push_back({i.second, i.first});

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    vector<int> ans;
    for (auto i : v)
    {
        if (k > 0)
        {
            ans.push_back(i.second);
            k--;
        }
    }
    return ans;
}