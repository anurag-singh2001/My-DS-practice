vector<int> mergetwo(vector<int> &a, vector<int> &b)
{
    vector<int> c;
    int i = 0;
    int j = 0;

    while (j < b.size() && i < a.size())
    {
        if (a[i] < b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }

    if (i < a.size())
    {
        for (int j = i; j < a.size(); j++)
        {
            c.push_back(a[j]);
        }
    }
    if (j < b.size())
    {
        for (int i = j; i < b.size(); i++)
        {
            c.push_back(b[i]);
        }
    }
    return c;
}

vector<int> mergeThree(vector<int> &a, vector<int> &b, vector<int> &c)
{
    // Your code here
    vector<int> v;
    v = mergetwo(a, b);
    return mergetwo(v, c);
}
