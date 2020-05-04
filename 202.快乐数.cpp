/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 * 1、将每次迭代的n存储到set中，如果set中有新生成的n，说明无线循环
 * 2、可以通过转换成字符串的方法，拆分数字，但是leetcode不支持itoa，
 * 用sprinf函数，遇到'\0'结束搜索
 */

// @lc code=start

class Solution {
public:
    int nestN(int n)
    {
       int nestN=0;
       char str[32];
       //itoa(n,str,10);
       sprintf(str,"%d",n);
       for(int i=0;str[i]!='\0';i++)
       {
           nestN+=pow(str[i]-'0',2);
       }
     //  cout<<nestN<<endl;
       return nestN;
    }
    bool isHappy(int n) {
        unordered_set<int> nset;  
        nset.insert(n);
        while(true)
        {
            if(n==1)
            {
                return true;
            }else
            {
                n=nestN(n);
                if(nset.count(n))
                    return false;
                else
                    nset.insert(n);
            }
            
        }
    }
};
// @lc code=end

