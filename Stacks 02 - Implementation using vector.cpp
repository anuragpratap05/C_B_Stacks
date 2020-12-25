#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
	vector<int> v;
public:
	void push(int a)
	{
		v.push_back(a);
	}

	bool empty()
	{
		if (v.size() == 0) return true;

		return false;
	}

	void pop()
	{
		if (!v.empty())
		{
			v.pop_back();
		}
	}

	int  top()
	{
		return v[v.size() - 1];
	}
};

int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Stack s;

	for (int i = 1; i <= 5; i++)
	{
		s.push(i * i);
	}
	while (!s.empty())
	{
		cout << s.top() << " ";
		s.pop();
	}

}
