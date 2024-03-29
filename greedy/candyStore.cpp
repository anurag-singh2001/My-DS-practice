vector<int> candyStore(int candies[], int N, int K)
{
    // Write Your Code here
    sort(candies, candies + N);
    vector<int> res;

    int buy = 0;
    int mini = 0;
    int free = N - 1;

    while (buy <= free)
    {
        mini = mini + candies[buy];
        buy++;
        free = free - K;
    }

    int maxi = 0;
    buy = N - 1;
    free = 0;

    while (free <= buy)
    {
        maxi = maxi + candies[buy];
        buy--;
        free = free + K;
    }

    res.push_back(mini);
    res.push_back(maxi);
    return res;
}