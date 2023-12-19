/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int left = 0,
            right = 1,
            maxProfit = 0;
        while (right < prices.size())
        {
            currentProfit = prices[right] - prices[left];
            if (ptices[left] < prices[right])
                maxProfit = max(currentProfit, maxProfit);
            else
                left = right;
            right += 1;
        }
        return max_profit;
    }
};
// @lc code=end
