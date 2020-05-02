/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> DFS(int i,int j, vector<int>& numbers, int target)
    {
        int ans = numbers[i] + numbers[j];
        int len = numbers.size();
        if (ans > target)
        {
            while (ans > target&&j>i+1)
            {
                j--;
                ans= numbers[i] + numbers[j];
                if (ans == target)
                {
                    vector<int> ansv;
                    ansv.push_back(i + 1);
                    ansv.push_back(j + 1);
                    return ansv;
                }
            }
            if (i == j - 1)
                return DFS(i, j, numbers, target);
            else
                return DFS(i + 1, j, numbers, target);
        }
        else if(ans<target)
        {
            while (ans < target && j < len - 1)
            {
                j++;  
                ans = numbers[i] + numbers[j];
                if (ans == target)
                {
                    vector<int> ansv;
                    ansv.push_back(i + 1);
                    ansv.push_back(j + 1);
                    return ansv;
                }
            }
            return DFS(i + 1, j, numbers, target);
        }
        else 
        {


                vector<int> ansv;
                ansv.push_back(i + 1);
                ansv.push_back(j + 1);
                return ansv;

        }

    }
    vector<int> twoSum(vector<int>& numbers, int target) {
        return DFS(0,1, numbers, target);
    }
};
// @lc code=end

