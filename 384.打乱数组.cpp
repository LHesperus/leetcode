/*
 * @lc app=leetcode.cn id=384 lang=cpp
 *
 * [384] 打乱数组
 */

// @lc code=start
class Solution {
public:
    Solution(vector<int>& nums) {
        nums1.assign(nums.begin(),nums.end());
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums1;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> nums2(nums1);
        for(int i=0;i<nums1.size();i++)
        {
            int index=rand()%(nums1.size()-i);
            swap(nums2[i],nums2[i+index]);
        }
        return nums2;

    }
private:
    vector<int> nums1;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

