#include<stack>
#include<vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>


using namespace std;
class Solution 
{
public:
	//bool IsPopOrder(const int * pPush,const int *pPop,int nLength)
	//{
	//	bool bPossible = false;
	//	if (pPush != nullptr&& pPop != nullptr &&nLength > 0)
	//	{
	//		const int* pNextPush = pPush;
	//		const int* pNextPop = pPop;
	//		stack<int> stackData;
	//		while (pNextPop - pPop < nLength)
	//		{
	//			while (stackData.empty() || stackData.top() != *pNextPop)
	//			{
	//				if (pNextPush - pPush == nLength)
	//					break;
	//				stackData.push(*pNextPush);
	//				pNextPush++;
	//			}
	//			if (stackData.top() != *pNextPop)
	//				break;
	//			stackData.pop();
	//			pNextPop++;
	//		}
	//		if (stackData.empty() && pNextPop - pPop == nLength)
	//			bPossible = true;
	//	}
	//	return bPossible;
	//}


	//输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1, 2, 3, 4, 5是某栈的压入顺序，序列4, 5, 3, 2, 1是该压栈序列对应的一个弹出序列，但4, 3, 5, 1, 2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) 
	{
		if (pushV.empty() || popV.empty() || pushV.size() != popV.size())
			return false;
		stack<int> s;
		int j = 0;
		for (int i = 0; i<pushV.size(); ++i)
		{
			s.push(pushV[i]);
			while (!s.empty() && s.top() == popV[j])
			{
				s.pop();
				++j;
			}
		}
		if (s.empty())
			return true;
		return false;
	}
};


int main()
{

}