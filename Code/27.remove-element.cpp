/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        vector<int> temp = nums;
        nums.clear();
        int k = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] != val)
            {
                nums.push_back(temp[i]);
                k++;
            }
        }
        return k;
    }
};
// @lc code=end
