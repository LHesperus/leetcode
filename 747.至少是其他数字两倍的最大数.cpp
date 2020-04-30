/*
 * @lc app=leetcode.cn id=747 lang=cpp
 *
 * [747] 至少是其他数字两倍的最大数
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(!nums.size()) return -1;
        if(nums.size()==1) return 0;
        int maxv=nums[0];
        int max2v=maxv;
        int len=nums.size();
        int v=0;
        int maxv_i=0;
        for(int i=0;i<len;i++)
        {
            v=nums[i];     
            if(v>maxv)
            {
                maxv=v;
                maxv_i=i;
            }
        }
        for(int i=0;i<len;i++)
        {
            v=nums[i];     
            if(2*v>max2v&&i!=maxv_i)
            {
                max2v=2*v;
            }
        }
        if(max2v<=maxv)
            return maxv_i;
        else
            return -1;
        
    }
};
// @lc code=end

