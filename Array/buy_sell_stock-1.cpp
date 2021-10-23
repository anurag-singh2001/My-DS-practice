int maxProfit(vector<int> &prices)
{
    int maxProfit = 0;
    int minSofar = prices[0];

    for (int i = 0; i < prices.size(); i++)
    {
        if (minSofar > prices[i])
            minSofar = prices[i];
        int profit = prices[i] - minSofar;
        if (profit > maxProfit)
            maxProfit = profit;
    }
    return maxProfit;
}