#include<vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;

class Solution {
public:
	vector<int> stk1;

	void push(int value)
	{
		stk1.push_back(value);
	}
	void pop()
	{
		stk1.pop_back();

	}
	int top()
	{
		return *stk1.end();
	}
	int min()
	{

		int min = *stk1.begin();
		vector<int>::iterator iter;

		for (iter = stk1.begin(); iter != stk1.end(); iter++)
		{
			if (min > *iter)
			{
				min = *iter;
			}


		}
		return min;

	}
};