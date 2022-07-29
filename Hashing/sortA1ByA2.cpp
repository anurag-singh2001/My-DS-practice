vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M)
{
    // Your code here
    map<int, int> m;
    vector<int> res;

    for (int i = 0; i < A1.size(); i++)
    {
        m[A1[i]]++;
    }

    for (int i = 0; i < A2.size(); i++)
    {
        while (m[A2[i]] > 0)
        {
            res.push_back(A2[i]);
            m[A2[i]]--;
        }
    }

    for (auto x : m)
    {
        if (x.second != 0)
            while (x.second > 0)
            {
                res.push_back(x.first);
                x.second--;
            }
    }

    return res;
}