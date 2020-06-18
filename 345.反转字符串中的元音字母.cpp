/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:

    string reverseVowels(string s) {
        if(s.length()<2) return s;
        int l=0,r=s.length()-1;
        string s0("AEIOUaeiou");
        while(l<r)
        {
            
            while(s0.find(s[l])==string::npos&&l<r) l++;
            while(s0.find(s[r])==string::npos&&l<r) r--;
           // cout<<s[l]<<s[r]<<endl;
            if(l>r)
              return s; 
            swap(s[l],s[r]);
            l++;r--;
        }
        return s;

    }

};
// @lc code=end

