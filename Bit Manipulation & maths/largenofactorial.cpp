vector<int> factorial(int N)
{
    // code here
    vector<int> res;
    res.push_back(1);

    for (int x = 2; x <= N; x++)
    {
        int carr = 0;
        for (int i = 0; i < res.size(); i++)
        {
            int val = res[i] * x + carr;
            res[i] = val % 10;
            carr = val / 10;
        }
        while (carr != 0)
        {
            res.push_back(carr % 10);
            carr = carr / 10;
        }
    }

    reverse(res.begin(), res.end());
    return res;
}