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

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
//��ת�����
class Solution
{
public:
	ListNode* ReverseList(ListNode* pHead)
	{


        //�������Ϊ�ջ���������ֻ��һ��Ԫ��
        if(pHead==NULL||pHead->next==NULL) return pHead;
         
        //�ȷ�ת����������ߵ������ĩ�˽��
        ListNode* pReverseNode = ReverseList(pHead->next);
         
        //�ٽ���ǰ�ڵ�����Ϊ����ڵ�ĺ����ڵ�
        pHead->next->next=pHead;
        pHead->next=NULL;
         
        return pReverseNode;


	}
};