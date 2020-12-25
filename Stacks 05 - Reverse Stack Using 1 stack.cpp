# C_B_Stacks
#include<bits/stdc++.h>
using namespace std;

void transfer(stack<int> &s1, stack<int > &s2, int n)
{
	for (int i = 0; i < n; i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}

int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<int> s1;
	stack<int> s2;

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	int n = s1.size();
	for (int i = 0; i < n; i++)
	{
		int x = s1.top();
		s1.pop();

		transfer(s1, s2, n - i - 1);
		s1.push(x);
		transfer(s2, s1, n - i - 1);
	}

	while (!s1.empty())
	{
		cout << s1.top();
		s1.pop();
	}

}
