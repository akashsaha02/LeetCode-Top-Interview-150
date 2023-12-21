/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n);
        int pre = 1;
        for (int i = 0; i < n; i++)
        {
            ans[i] = pre;
            pre *= nums[i];
        }
        pre = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            ans[i] *= pre;
            pre *= nums[i];
        }
        return ans;
    }
};
// @lc code=end
