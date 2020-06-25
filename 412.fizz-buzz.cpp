/*
 * @lc app=leetcode.cn id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution {
public:
    string helper(int n)
    {
        string s;
        while(n!=0)
        {
            s+=(n%10+'0');
            n=n/10;
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0&&i%5==0) ans.push_back("FizzBuzz");
            else if(i%3==0) ans.push_back("Fizz");
            else if(i%5==0) ans.push_back("Buzz");
            else ans.push_back(helper(i));
        }
        return ans;
    }
};
// @lc code=end

