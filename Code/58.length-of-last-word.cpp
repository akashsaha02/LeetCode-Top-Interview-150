/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int siz=s.size(),kount=0,flag=0;
        for(int i=siz-1;i>=0;i--){
            if(s[i]==' '&&flag)break;
            if(s[i]!=' '){
                flag=1;
                kount++;
            }
        }
        return kount;
    }
};
// @lc code=end

