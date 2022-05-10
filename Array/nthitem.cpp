int nthItem(int L1, int L2, int A[], int B[], int N)
{
    // code here
    set<int> arr;
    vector<int> v;
    for (int i = 0; i < L1; i++)
    {
        for (int j = 0; j < L2; j++)
        {
            arr.insert(A[i] + B[j]);
        }
    }

    set<int>::iterator itr;
    for (itr = arr.begin(); itr != arr.end(); itr++)
    {
        v.push_back(*itr);
    }
    if (N <= v.size())
    {
        return v[N - 1];
    }
    return -1;
}