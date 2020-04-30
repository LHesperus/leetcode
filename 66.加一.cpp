/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> addOne(int i,vector<int> &digits)
    {
        if(i==-1)
        {
            vector<int> ans;
            ans.resize(digits.size()+1);
            ans[0]=1;
            for(int i=0;i<digits.size();i++)
            {
                ans[i+1]=digits[i];
            }
            return ans;
        }
        else
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                return addOne(i-1,digits);
            }
            else
            {
                digits[i]+=1;
                return digits;
            }
            
        }
        
    }
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();  
        return addOne(len-1,digits);
    }
};
// @lc code=end

