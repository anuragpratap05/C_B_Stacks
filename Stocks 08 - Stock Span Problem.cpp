# C_B_Stacks#include<bits/stdc++.h>
using namespace std;



int main()
{

#ifndef ONLINE_jUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int price[7] = {100, 80, 60, 70, 60, 75, 85};
	stack<int> s;

	s.push(0);
	int span[7];

	span[0] = 1;

	for (int i = 1; i <= 6; i++)
	{
		int curr_price = price[i];


		while (!s.empty() and price[s.top()] <= curr_price)
		{
			s.pop();
		}

		if (!s.empty())
		{
			span[i] = i - s.top();
		}
		else
		{
			span[i] = i + 1;
		}

		s.push(i);

	}

	for (int i = 0; i <= 6; i++)
	{
		cout << span[i] << " ";
	}




}
