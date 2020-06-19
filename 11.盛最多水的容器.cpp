/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 * 首尾两端双指针，O(N),O(1)
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int pl=0,pr=height.size()-1;
        int sum=0,max_sum=0;
        while(true)
        {
            sum=(pr-pl)*min(height[pr],height[pl]);
            if(sum>max_sum) max_sum=sum;
            if(height[pl]>height[pr])
            {
                pr--;
            }else
            {
                pl++;
            }
            if(pl==pr)
             return max_sum;
            
        }
    }
};
// @lc code=end

