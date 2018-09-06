#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
struct TreeNode 
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(nullptr), right(nullptr) 
	{
	}
}; 
class Solution 
{
public:
	//输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == nullptr || pRoot2 == nullptr)
			return false;
		if (pRoot1->val == pRoot2->val)
		{
			return isSubtree(pRoot1, pRoot2)
				|| isSubtree(pRoot1->left, pRoot2)
				|| isSubtree(pRoot1->right, pRoot2);
		}
		else
			return false;
		
	}

	bool isSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		//如果Tree2已经遍历完了都能对应的上，返回true
		if (pRoot2 == nullptr) 
			return true;
		//如果Tree2还没有遍历完，Tree1却遍历完了。返回false
		if (pRoot1 == nullptr && pRoot2 != nullptr)
			return false;
		if (pRoot2->val == pRoot1->val) 
		{
			return isSubtree(pRoot1->left, pRoot2->left) 
				&& isSubtree(pRoot1->right, pRoot2->right);
		}
		else 
			return false;
	}
};
