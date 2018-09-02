#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class Solution 
{
public:
	int jumpFloorII(int number) 
	{
		int result = 0;
		if (number == 0)
		{
			result = 0;
		}
		else if (number == 1)
		{
			result = 1;
		}
		else 
		{
			result = 2 * jumpFloorII(number - 1);
		}
		return result;
	}
};