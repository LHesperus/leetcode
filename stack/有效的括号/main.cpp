#include <iostream>
#include <stack>
using namespace std;


bool BraceMatch(string s)
{
	stack <char> stk;
	for (int i = 0; i < s.size(); i++)
	{

		if (s[i] == '{' || s[i] == '[' || s[i] == '(')//遇到开括号压入栈
		{
			stk.push(s[i]);
		}
		else
		{
			if (stk.empty() == true)//如果栈在此时为空说明闭括号找不到左括号，括号不匹配
			{
				return !stk.empty();
			}
			bool isValid = true;
			switch (s[i])
			{
			case '}':
				if (stk.top() == '{')
				{
					stk.pop();//相邻括号匹配，则弹出
					isValid = true;
				}
				else
				{
					stk.push(s[i]);//相邻括号不匹配，则压入
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
	return stk.empty();//有效返回true
}

int main()
{
	string s = "([[]{}]}()()";
	//string s = ")[[]{}]}()()";
	cout << BraceMatch(s) << endl;
	return 0;

}