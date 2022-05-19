// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let mini = prices[0] , maxi = 0;
    for(let i=0; i< prices.length; i++) {
        mini = Math.min(mini,prices[i]);
        maxi = Math.max(maxi,prices[i]-mini)
    }
    return maxi;
};

// C++ implementation
/*
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
*/
