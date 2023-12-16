/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> array;
        for (int i = 0; i < m; i++)
        {
            array.push_back(nums1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            array.push_back(nums2[i]);
        }
        sort(array.begin(), array.end());
        nums1.clear();
        nums1 = array;
    }
};
// @lc code=end
