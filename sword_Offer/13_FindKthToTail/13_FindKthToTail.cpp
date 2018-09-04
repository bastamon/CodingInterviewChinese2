#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;

struct ListNode 
{
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}; 
//µ¹ÊýµÚk
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
	{
		
		if (pListHead == nullptr || k <= 0)
			return nullptr;
		else
		{
			unsigned int count = 0;
			for (ListNode* p = pListHead; p != nullptr; p = p->next)
				count++;
			if (k > count)
				return nullptr;
			else
			{
				ListNode* p = pListHead;
				while (count>0 && p->next != nullptr)
				{
					count--;
					p = p->next;
				}
				return p;
			}
		}
	}
};