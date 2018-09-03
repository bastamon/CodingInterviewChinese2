#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;


class Solution 
{
public:
	void reOrderArray(vector<int> &array)
	{
		//vector<int> temp = array;
		vector<int> tt;
		vector<int>::iterator iter;
		for (iter = array.begin(); iter != array.end(); iter++)
		{
			if (*iter % 2)//奇
				tt.push_back(*iter);
		}
		for (iter = array.begin(); iter != array.end(); iter++)
		{
			if (*iter % 2==0)//偶
				tt.push_back(*iter);
		}
		array = tt;

	}
};


