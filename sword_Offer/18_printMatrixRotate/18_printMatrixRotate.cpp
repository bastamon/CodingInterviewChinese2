#include<vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;


class Solution 
{
public:
	vector<int> printMatrix(vector<vector<int> > matrix) 
	{
		vector<int> vals;
		if (matrix.size() == 0)
			return vals;
		int topRow = 0, leftcol = 0;
		int bottomRow = matrix.size() - 1;
		int rightcol = matrix[0].size() - 1;

		int curRow = 0, curcol = 0;

		while (leftcol <= rightcol && topRow <= bottomRow)
		{			
			//constant topRow, left -> right
			if (leftcol > rightcol)
				break;
			else
				curRow = topRow;
			for (curcol = leftcol; curcol <= rightcol; curcol++)
			{
				vals.push_back(matrix[curRow][curcol]);
			}
			topRow += 1;

			//constant rightcol, up ->bottom
			if (topRow > bottomRow)
				break;
			else
				curcol = rightcol;
			for (curRow = topRow; curRow<= bottomRow; curRow++)
			{
				vals.push_back(matrix[curRow][curcol]);
			}
			rightcol -= 1;

			//constant bottomRow, right->left
			if (leftcol > rightcol)
				break;
			else
				curRow = bottomRow;
			for (curcol = rightcol; curcol >= leftcol; curcol--)
			{
				vals.push_back(matrix[curRow][curcol]);
			}
			bottomRow -= 1;

			//constant leftcol, bottom->top
			if (topRow > bottomRow)
				break;
			else
				curcol = leftcol;
			for (curRow = bottomRow; curRow >= topRow; curRow--)
			{
				vals.push_back(matrix[curRow][curcol]);
			}
			leftcol += 1;

		}
		return vals;
	}
};



int main()
{
	int m = 16, n = 15,count = 1;
	vector<vector<int>>vec(m);
	//初始化一个m*n的二维数组
	for (int i = 0; i < m; i++) 
	{
		vec[i].resize(n);
		for (int j = 0; j < n; j++, count++)
			vec[i][j] = count;
	}

	cout << "Row:" << vec.size() << "  Column:" << vec[0].size() << endl;
	//输出二维数组 
	cout << "[" << endl;
	for (int j = 0; j<vec.size(); j++) 
	{
		cout << "[" << " ";
		for (int k = 0; k<vec[0].size(); k++) 
		{
			cout << vec[j][k] << " ";
		}
		cout << "]" << endl;
	}
	cout << "]" << endl;
	cout << "done." << endl;
	system("pause");


	Solution A ;
	vector<int>a = A.printMatrix(vec);

	for (int i = 0; i < a.size(); i++)
		cout << a.at(i) << " ";

	system("pause");
	return 0;
}


