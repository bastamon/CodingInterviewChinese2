#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;




typedef unsigned int uint32_t;

struct ListNode 
{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x), next(nullptr) 
	{
	}
}; 

class Solution 
{
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == nullptr && pHead2 == nullptr)
			return nullptr;
		else if (pHead1 == nullptr)
			return pHead2;
		else if (pHead2 == nullptr)
			return pHead1;
		ListNode* pHead = new ListNode(0);
		ListNode* cur = pHead;
		while (true) 
		{
			if (pHead1 == nullptr)
			{
				cur->next = pHead2;
				break;
			}
			else if (pHead2 == nullptr)
			{
				cur->next = pHead1;
				break;
			}
			if (pHead1->val > pHead2->val)
				swap(pHead1, pHead2);
			cur->next = pHead1;
			cur = cur->next;
			pHead1 = pHead1->next;
		}
		return pHead->next;
	}




	//ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	//{	
	//	
	//	if (pHead1 == nullptr &&pHead2 == nullptr) 
	//		return nullptr;
	//	if (pHead1 == nullptr)
	//		return pHead2;
	//	if (pHead2 == nullptr)
	//		return pHead1;
	//	else
	//	{
	//		ListNode *p = pHead1;
	//		ListNode *q = (ListNode *)malloc(sizeof(ListNode));
	//		for (q = pHead1; q->next != nullptr;)
	//			q = q->next;
	//		q->next = pHead2;
	//		free(q);			
	//		return insertionSortList(p);
	//	}

	//}

	//ListNode *insertionSortList(ListNode *head) 
	//{
	//	// IMPORTANT: Please reset any member data you declared, as
	//	// the same Solution instance will be reused for each test case.
	//	if (head == NULL || head->next == NULL)return head;
	//	ListNode *p = head->next, *pstart = new ListNode(0), *pend = head;
	//	pstart->next = head; //为了操作方便，添加一个头结点
	//	while (p != NULL)
	//	{
	//		ListNode *tmp = pstart->next, *pre = pstart;
	//		while (tmp != p && p->val >= tmp->val) //找到插入位置
	//		{
	//			tmp = tmp->next; pre = pre->next;
	//		}
	//		if (tmp == p)pend = p;
	//		else
	//		{
	//			pend->next = p->next;
	//			p->next = tmp;
	//			pre->next = p;
	//		}
	//		p = pend->next;
	//	}
	//	head = pstart->next;
	//	delete pstart;
	//	return head;
	//}
};