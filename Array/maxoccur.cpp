int maxOccured(int L[], int R[], int n, int maxx)
{

    // Your code here
    vector<int> ans(maxx + 2, 0);
    for (int i = 0; i < n; i++)
    {
        ans[L[i]]++;
        ans[R[i] + 1]--;
    }

    int maxm = 0;
    int count = ans[0];
    for (int i = 1; i <= maxx + 1; i++)
    {
        ans[i] += ans[i - 1];
        if (ans[i] > count)
        {
            maxm = i;
            count = ans[i];
        }
    }
    return maxm;
}