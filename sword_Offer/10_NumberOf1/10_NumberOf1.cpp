#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<bitset>
using namespace std;



class Solution {
public:
	int  NumberOf1(int n) 
	{
		int count = 0;
		for (; n != 0; count++)
			n = n&(n - 1);
		return count;
	}
};




int main()
{
	int a = -2;
	cout << bitset<sizeof(a) * 8>(a) << endl;
	system("pause");
	Solution A;

	cout << A.NumberOf1(a) << endl;
	system("pause");
	return 0;
}