/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int alen=a.length();
        int blen=b.length();
        string a1,b1;
        if(alen<blen)
        {
            b1=b;
            for(int i=0;i<(blen-alen);i++)
                a1+='0';
            a1+=a;
        }else
        {
            a1=a;
            for(int i=0;i<(alen-blen);i++)
                b1+='0';
            b1+=b;
        }
        int len=a1.length();
        int carry=0;
        string ans,anstmp;
        for(int i=0;i<len;i++)
        {
            switch(a1[len-1-i]+b1[len-1-i]-'0'-'0'+carry)
            {
                case 0:
                    anstmp+='0';
                    break;
                case 1:
                    anstmp+='1';
                    carry=0;
                    break;
                case 2:
                    anstmp+='0';
                    carry=1;
                    break;
                case 3:
                    anstmp+='1';
                    break;
            }
        }
        if(carry==1)
        {
            anstmp+='1';
        }
        len=anstmp.length();
        for(int i=0;i<len;i++)
            ans+=anstmp[len-1-i];
        return ans;
    }
};
// @lc code=end

