/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int ans;
        map<int, int> m;
        for (int i = 0; i < n; i++)
            m[nums[i]]++;
        int f = n / 2;
        for (auto it : m)
        {
            if (it.second > f)
                ans = it.first;
        }
        return ans;
    }
};
// @lc code=end
