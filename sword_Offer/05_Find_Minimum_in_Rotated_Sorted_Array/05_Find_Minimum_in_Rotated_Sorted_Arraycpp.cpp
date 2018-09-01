#include<vector>
using namespace std;


class Solution 
{
public:
	int minNumberInRotateArray(vector<int> rotateArray)		
	{
		if (rotateArray.size() == 0)
		{
			return 0;
		}
		for (size_t i = 0; i < rotateArray.size() - 1; i++)
		{
			if (rotateArray.at(i)>rotateArray.at(i + 1))
				return rotateArray.at(i + 1);
		}
		return rotateArray.at(0);
	}
};