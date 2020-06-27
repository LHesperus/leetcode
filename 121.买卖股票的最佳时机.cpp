/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<1) return 0;
        //int premin=prices[0];
        int ans=0;
        for(int &p:prices)
        {
            if(p<prices[0]) prices[0]=p;
            if(p-prices[0]>ans) ans=p-prices[0];
        }
        return ans;
    }
};
// @lc code=end

