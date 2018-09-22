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