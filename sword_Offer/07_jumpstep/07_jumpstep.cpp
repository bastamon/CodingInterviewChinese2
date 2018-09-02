#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class Solution {
public:
	int jumpFloor(int number) {
		if (number < 1)
			return 0;
		else if (number == 1)
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
	int num = 5;
	Solution result;
	cout << result.jumpFloor(num)<<endl;
	system("pause");
	return 0;
}