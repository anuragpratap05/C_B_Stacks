# C_B_Stacks#include<bits/stdc++.h>
using namespace std;

void pushatbottom(stack<int> &s, int x)
{
	if (s.empty())
	{
		s.push(x);
		return;
	}

	int data = s.top();
	s.pop();
	pushatbottom(s, x);
	s.push(data);
}

void reverse_stack(stack<int> &s)
{
	if (s.empty())
	{
		return;
	}

	int x = s.top();
	s.pop();
	reverse_stack(s);
	//cout << x << " ";
	pushatbottom(s, x);
}

int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<int> s1;
	//stack<int> s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	reverse_stack(s1);

	while (!s1.empty())
	{
		cout << s1.top() << " ";
		s1.pop();
	}



}
