#include <iostream>
#include <stack>
using namespace std;


int AddBrace(string s)
{
	stack <char> stk;
	unsigned int  cnt=0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')//开括号，压入
		{
			stk.push(s[i]);
		}
		else 
		{
			if (stk.empty() == true)//如果是空说明s[i]无匹配括号，cnt计数加1
			{
				cnt++;
			}
			else 
			{
				stk.pop();//匹配括号，弹出
			}
		}
	}
	return stk.size() + cnt;//stk.size()表示遍历括号后栈内剩余的未匹配括号数

}

int main()
{
	string s = "()))((";
	cout << AddBrace(s) << endl;
	return 0;

}