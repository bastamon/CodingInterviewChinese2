#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class Solution 
{
public:
	// pow(2,n-1)
	// 2^n-1
	//int jumpFloorII(int number) 
	//{
	//	int result = 0;
	//	if (number == 0)
	//	{
	//		return 0;
	//	}
	//	else if (number == 1)
	//	{
	//		result = 1;
	//	}
	//	else 
	//	{
	//		result = 2 * jumpFloorII(number - 1);
	//	}
	//	return result;
	//}
	int jumpFloorII(int number)
	{
		return number == 0 ? 0 : pow(2, number - 1);
	}
};



int main()
{
	int a = 4;
	Solution A;
	cout << A.jumpFloorII(a) << endl;
	system("pause");
	return 0;
}