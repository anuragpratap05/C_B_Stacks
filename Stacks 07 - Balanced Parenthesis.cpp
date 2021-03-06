# C_B_Stacks#include<bits/stdc++.h>
using namespace std;

bool isvalid(char* s)
{
	stack<char> stk;

	for (int i = 0; s[i] != '\0'; i++)
	{
		char ch = s[i];
		if (ch == '(')
		{
			stk.push(ch);
		}
		else if (ch == ')')
		{
			if (stk.empty() or stk.top() != '(')
			{
				return false;
			}
			stk.pop();
		}

	}
	return stk.empty();
}

int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char s[100] = "((a+b)+(c-d+f))";
	if (isvalid(s))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}



}
