/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;

        for(int i=1;i<nums.size();i++){
            if( (nums[k]!=nums[i])<=2){
                k++;
                nums[k]=nums[i];
            }
        }
        return k+1;

    }
};
// @lc code=end

