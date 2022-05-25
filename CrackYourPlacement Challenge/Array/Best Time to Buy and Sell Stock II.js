// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit = 0;
    for(let i= 1; i<prices.length; i++) {
        if(prices[i-1] < prices[i]) {
            profit += prices[i]-prices[i-1];
        }
    }
    return profit;
};

//C++ implementation
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int mini=prices[0],profit=0;
//         for(int i=0; i< prices.size(); i++) {
//             mini = min(prices[i],mini);
//             if(prices[i] - mini > 0) {
//                 profit += prices[i] - mini ;
//                 mini = prices[i];
//             }
//         }
//         return profit;
//     }
// };
