/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int ans=0,n=s.length();
        for(int i=0;i<n;)
        {
            switch(s[i])
            {
                case 'M':ans+=1000;i++;break;
                case 'D':ans+=500;i++;break;
                case 'C':
                    if(i+1<n)
                    {
                        if(s[i+1]=='M')
                        {
                            ans+=900;
                            i+=2;
                        }else if(s[i+1]=='D')
                        {
                            ans+=400;
                            i+=2;                           
                        }else
                        {
                            ans+=100;
                            i++;
                        }
                    }else
                    {
                        ans+=100;
                        i++;
                    }
                    break;
                case 'L':ans+=50;i++;break;
                case 'X':
                    if(i+1<n)
                    {
                        if(s[i+1]=='L')
                        {
                            ans+=40;
                            i+=2;
                        }else if(s[i+1]=='C')
                        {
                            ans+=90;
                            i+=2;                           
                        }else
                        {
                            ans+=10;
                            i++;
                        }
                    }else
                    {
                        ans+=10;
                        i++;
                    }
                    break;
                case 'I':
                    if(i+1<n)
                    {
                        if(s[i+1]=='V')
                        {
                            ans+=4;
                            i+=2;
                        }else if(s[i+1]=='X')
                        {
                            ans+=9;
                            i+=2;                           
                        }else
                        {
                            ans+=1;
                            i++;
                        }
                    }else
                    {
                        ans+=1;
                        i++;
                    }
                    break;
                case 'V':ans+=5;i++;break;                  
            }
        }
        return ans;
    }
};
// @lc code=end

