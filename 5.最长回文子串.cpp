/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    int helper(int i,string &s)//奇数长回文串
    {
        for(int j=0;j+i<s.length()&&i-j>=0;j++)
            if(s[i+j]!=s[i-j]) return j-1;
        return s.length()-i-1>i?i:s.length()-i-1;

    }
    int helper2(int i,string &s)//偶数长回文串
    {
        for(int j=0;i-j>=0&&i+1+j<s.length();j++)
            if(s[i+1+j]!=s[i-j]) return j;
        return s.length()-i-1>i+1?i+1:s.length()-i-1;
    }
    string longestPalindrome(string s) {
        int len=s.length();
        if(len<2) return s;
        bool flag=true;
        int itmp=0,maxLen=0;
        for(int i=0;i<len;i++)
        {   
            int tmp=helper(i,s);
           // cout<<tmp<<endl;
            if(tmp>=maxLen) 
            {
                maxLen=tmp;
                itmp=i;
                flag=true;
            }
            tmp=helper2( i,s);
            if(tmp>maxLen) 
            {
                maxLen=tmp;
                itmp=i;
                flag=false;
            }
           // cout<<tmp<<endl;
        }
        string ans;
        if(flag)
            for(int i=itmp-maxLen;i<itmp+maxLen+1;i++)
                ans+=s[i];
        else
            for(int i=itmp-maxLen+1;i<itmp+maxLen+1;i++)
                ans+=s[i];
        return ans;
    }
};
// @lc code=end

