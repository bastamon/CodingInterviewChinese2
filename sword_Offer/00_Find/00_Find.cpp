//在一个二维数组中（每个一维数组的长度相同），每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
#include <vector>
#include <iostream>
using namespace std;
class Solution 
{
public:
	//方法1
	//bool Find(int target, vector<vector<int> > array) 
	//{
	//	for each(vector<int> rol in array)
	//		for each(int value in rol)
	//			if (value == target)
	//				return true;
	//	return false;
	//}


	//方法2
	bool Find(int target, vector<vector<int>> array )
	{
		vector<vector<int>>::iterator row;
		vector<int>::iterator col;
		for (row = array.begin(); row != array.end(); row++)
			for (col = (*row).begin(); col != (*row).end(); col++)
				if (*col == target)
					return true;
		return false;
	}

	//方法3
	//bool Find(int target, vector<vector<int>> array)
	//{
	//	int rows, cols;
	//	rows = array.size();
	//	cols = array[0].size();
	//	for (int i = 0; i<rows; i++)
	//		for (int j = 0; j<cols; j++)
	//			if (target == array[i][j])
	//				return true;
	//	return false;
	//}


	Solution(vector<vector<int>> array) : arr(array)
	{	}
private:
	vector<vector<int>> arr;
};



int main()
{
	vector<int> col;
	vector<vector<int>>array;

	for (int i = 0; i<5; i++)
	{
		col.push_back(i);
		col.push_back(i);
		array.push_back(col);
		col.erase(col.begin(), col.end());
	}
	Solution A = Solution(array);
	cout << A.Find(4,array) << endl;
	system("pause");
}

