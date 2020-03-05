/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start


class Solution {
public:

    bool isValid(string s) {
        stack <char> stk;

	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '{' || s[i] == '[' || s[i] == '(')
		{
			stk.push(s[i]);
		}
		else
		{
            if (stk.empty() == true)
			{
				return !stk.empty();
			}
			bool isValid = true;
			switch (s[i])
			{
			case '}':
				if (stk.top() == '{')
				{
					stk.pop();
					isValid = true;
				}
				else
				{
					stk.push(s[i]);
					isValid = false;
				}
				break;
			case ']':
				if (stk.top() == '[')
				{
					stk.pop();
					isValid = true;
				}
				else
				{
					stk.push(s[i]);
					isValid = false;
				}
				break;
			case ')':
				if (stk.top() == '(')
				{
					stk.pop();
					isValid = true;
				}
				else
				{
					stk.push(s[i]);
					isValid = false;
				}
				break;
			default:break;
			}

		}
	}
	return stk.empty();
    }
};




// @lc code=end

