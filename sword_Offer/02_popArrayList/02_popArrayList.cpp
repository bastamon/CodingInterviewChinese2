/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
#include <vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};


class Solution
{
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int> result;
		ListNode *p = (ListNode*)malloc(sizeof(ListNode));
		p = head;

		while (p != nullptr)
		{
			result.push_back(p->val);
			p = p->next;
		}

		reverse(result.begin(), result.end());
		return result;
	}
};