#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<numeric>

using namespace std;

typedef unsigned char uint8_t;

typedef unsigned short uint16_t;

typedef unsigned int uint32_t;

// num= arr.size()
template<typename T, typename T1>
T get_Average(vector<T> arr, T1 num)
{
	if (num <= 0)
		return 0;
	else 
		return num == 1 ? arr.at(num - 1):(arr.at(num - 1) + (num - 1) * get_Average(arr, num - 1)) / num;
}


int main()
{
	uint16_t arr[5] = { 7, 1, 3, 8, 5 };
	
	vector<uint16_t> vec(arr, arr + 5);
	cout << "平均值为:" << get_Average(vec, vec.size()) << endl;
	cout << "平均值为:" << accumulate(vec.begin(), vec.end(), 0) / vec.size() << endl;
	system("pause");
	return 0;
}