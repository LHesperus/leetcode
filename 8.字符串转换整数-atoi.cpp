/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string str) {
        //判断数字起始位置
        int n=str.length();
        int pstart=0;
        while(pstart<n&&str[pstart]==' ') pstart++;
        if(pstart==n) return 0;
        bool flag=true;
        if((str[pstart]=='-'||str[pstart]=='+')&&str[pstart+1]>='0'&&str[pstart+1]<='9') //判断符号下一位是否是数字
        {
            flag=str[pstart]=='-'?false:true;
            pstart++; 
        }
        else if(str[pstart]=='-'||str[pstart]=='+') return 0;//符号下一位不是数字
        else if(str[pstart]<'0'||str[pstart]>'9') return 0;//没有符号且第一位不是数字
        //舍去前面的0
        while(pstart<n&&str[pstart]=='0') pstart++;
        //判断数字长度
        int pend=pstart;
        while(pend<n&&str[pend]>='0'&&str[pend]<='9') pend++;
        //按位转数字
        if(pend-pstart>11) return flag?INT_MAX:INT_MIN;
        long ans=0;//用long
        for(int i=0;i<pend-pstart;i++)
        {
           ans+=flag?(str[pend-1-i]-'0')*pow(10,i):-(str[pend-1-i]-'0')*pow(10,i);
           if(ans>INT_MAX) return INT_MAX;
           if(ans<INT_MIN) return INT_MIN;
        }
        return ans;
    }
};
// @lc code=end

