/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<2) return true;
        int i=0,j=s.length()-1;
        while(true)
        {
            while(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')))
            {
                i++;
                if(i>=j) return true;
            }
            
            while(!((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9')))
            {
                j--;
                if(i>=j) return true;
            }
            if(i>=j)
                return true;

            if(!((abs(s[i]-s[j])==32&&(!((s[i]>='0'&&s[i]<='9')||(s[j]>='0'&&s[j]<='9'))))||s[i]==s[j])) return false;
            i++;j--;
        }
    }
};
// @lc code=end

