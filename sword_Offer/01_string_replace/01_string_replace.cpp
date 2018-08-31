//请实现一个函数，将一个字符串中的每个空格替换成“ % 20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are % 20Happy。

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length)
	{
		int len = length;
		for (int i = 0; i < length; i++)
		{
			if (*(str + i) == ' ')
			{
				len += 2;
				for (int j = len - 1; j - 2 > i; j--)
				{
					*(str + j) = *(str + j - 2);
				}
				*(str + i) = '%';
				*(str + i + 1) = '2';
				*(str + i + 2) = '0';
				length = len;
			}
		}
	}

	//方法2
	//void replaceSpace(char *str, int length)
	//{
	//	for (int i; i < length; i++)
	//		if (*ptr == ' ')
	//			*ptr = ' ';
	//		else
	//			ptr++;
	//}





	Solution(string s) :str(s)
	{
		ptr = &str[0];
	}

private:
	string str;
	char *ptr = (char*)malloc(sizeof(string) / sizeof(char));
};



int main()
{
	string str = "We Are Happy.";
	char *ptr = (char*)malloc(sizeof(str));
	ptr = &str[0];

	Solution A = Solution("We Are Happy.");
	A.replaceSpace(ptr, sizeof(str) / sizeof(str[0]));
}
