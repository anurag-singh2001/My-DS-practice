static bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int maxMeetings(int start[], int end[], int n)
{
    // Your code here
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        v.push_back({start[i], end[i]});
    sort(v.begin(), v.end(), cmp);
    int st = v[0].first;
    int en = v[0].second;
    int c = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].first > en)
        {
            c++;
            en = v[i].second;
        }
    }
    return c;
}