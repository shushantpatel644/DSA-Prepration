class solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxSofar = a[0];
        int maxiumProfit = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            maxSofar = min(maxSofar, prices[i]);
            int profit = prices[i] - maxSofar;
            maxiumProfit = max(maxiumProfit, profit);
        }
        return maxiumProfit;
    }
}

// tc = o(n)
//sc = o(1)
