bool static mycmp(pair<int, int> a, pair<int, int> b)
{
    return (a.second < b.second);
}

int activitySelection(vector<int> start, vector<int> end, int n)
{
    // Your code here
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({start[i], end[i]});

    sort(v.begin(), v.end(), mycmp);
    int prev = 0;
    int c = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i].first > v[prev].second)
        {
            c++;
            prev = i;
        }
    }
    return c;
}