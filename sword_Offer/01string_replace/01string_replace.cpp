//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ� % 20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are % 20Happy��

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
				for (int j = len - 1;j-2 > i;j--)
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

	//����2
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
	char *ptr = (char*)malloc(sizeof(string)/sizeof(char));
};



int main()
{
	string str = "We Are Happy.";
	char *ptr = (char*)malloc(sizeof(str));
	ptr = &str[0];

	Solution A = Solution("We Are Happy.");
	A.replaceSpace(ptr,sizeof(str)/sizeof(str[0]));
}