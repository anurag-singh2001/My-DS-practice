static bool cmp(Job a, Job b)
{
    return a.profit > b.profit;
}

vector<int> JobScheduling(Job arr[], int n)
{
    // your code here
    bool vis[n] = {false};
    sort(arr, arr + n, cmp);
    int c = 0;
    int p = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = min(n, arr[i].dead - 1); j >= 0; j--)
        {

            if (vis[j] == false)
            {
                p += arr[i].profit;
                c++;
                vis[j] = true;
                break;
            }
        }
    }

    return {c, p};
}