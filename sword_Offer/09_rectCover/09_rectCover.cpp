#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;


class Solution 
{
public:
	int rectCover(int number) 
	{
		if (number == 1)
			return 1;
		else
		{
			int a = 1, b = 1, c = 0;
			for (int i = 1; i < number; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
			return c;
		}
	}
};



int main()
{
	int a = 3;
	Solution A;

	cout << A.rectCover(a) << endl;
	return 0;
}