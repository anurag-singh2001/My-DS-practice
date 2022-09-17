double MedianOfArrays(vector<int> &array1, vector<int> &array2)
{
    // Your code goes here
    vector<int> v;
    for (int i = 0; i < array1.size(); i++)
        v.push_back(array1[i]);

    for (int j = 0; j < array2.size(); j++)
        v.push_back(array2[j]);

    sort(v.begin(), v.end());
    if (v.size() % 2 == 0)
    {
        int ans = v.size() / 2;
        double med = (v[ans] + v[ans - 1]) / 2.0;
        return med;
    }
    else
        return v[v.size() / 2];
}