// Best Time to buy & Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0], maxi=0;
        for( int i=0; i<prices.size(); i++)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }else
                if(prices[i]-mini > maxi)
                {
                    maxi=(prices[i]-mini);
                }
        }
        return maxi;
    }
};
