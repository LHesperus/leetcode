/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(0)
        {
            unordered_set<int> tmp;
            for(int &v:nums)
                if(!tmp.count(v))
                    tmp.insert(v);
                else
                    return true;
            return false;
        }
        if(1)
        {
            if(!nums.size()) return false;
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++)
            {
                if(nums[i]==nums[i-1])
                    return true;
            }
            return false;

        }
    }
};
// @lc code=end

