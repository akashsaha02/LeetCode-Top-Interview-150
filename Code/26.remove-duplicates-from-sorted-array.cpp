/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int k;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        k=st.size();
        nums.clear();
        for(int it:st){
            nums.push_back(it);
        }
        return k;
    }
};
// @lc code=end

