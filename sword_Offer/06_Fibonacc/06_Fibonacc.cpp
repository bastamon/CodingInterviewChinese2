#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class Solution {
public:
	int Fibonacci(int n) 
	{
		if (n == 0)
			return 0;
		else if (n <= 2)
			return 1;
		else
		{
			int a = 1, b = 1, c = 0;
			for (int i = 2; i < n; i++)
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
	int a;
	Solution A ;

	cin >> a;
	cout << A.Fibonacci(a) << endl;
	system("pause");
	return 0;
}