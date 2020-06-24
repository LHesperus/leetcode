/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    void helper(int &n)
    {
        vector<int> vec;
        int n0=1;
        for(int i=0;i<9;i++)//数存vector
        {
            n0*=10;
            vec.push_back(n%n0/(n0/10));
            
        }
        vec.push_back(n/n0);
        while(vec[vec.size()-1]==0)//舍去前面的0
        {
            vec.pop_back();
        }
        n=0;
        for (int i = 0; i < vec.size(); i++)
        {
            if (n > 147483647 && vec[0] >= 2) { n = 0; return; }//>2147483647
            if (i==9&&vec[0] > 2) { n = 0; return; }//>3000000000
            n += vec[vec.size() - 1 - i] * pow(10, i);
        }
    }

    int reverse(int x) {
        if(x==-2147483648||x==0) return 0;  
        bool flag=false;//正负
        if(x>0) flag =true;
        else x=-x;
        helper(x);

        return flag?x:-x;

    }
};
/*

int reverse(int x)
{
	long n = 0;
	while (x)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
	return n > INT_MAX || n < INT_MIN ? 0 : n;
}
*/
// @lc code=end

