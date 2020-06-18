/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) 
        {
            for(int i=0;i<n;i++) nums1[i]=nums2[i];
            return;
        }
          
        int i=m-1,j=n-1,p=m+n-1;
        while(p!=-1&&j!=-1)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[p]=nums1[i--];
                if(i==-1)
                {
                    for(int ii=0;ii<j+1;ii++)
                        nums1[ii]=nums2[ii];
                    return;
                }
            }else
            {
                nums1[p]=nums2[j--];
            }
            p--;
        }
    }
};
// @lc code=end

