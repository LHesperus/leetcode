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
			if (stk.empty() == true)
			{
				cnt++;
			}
			else 
			{
				stk.pop();
			}
		}
	}
	return stk.size() + cnt;

}

int main()
{
	string s = "()))((";
	cout << AddBrace(s) << endl;
	return 0;

}