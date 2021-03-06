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
	//操作给定的二叉树，将其变换为源二叉树的镜像
	void Mirror(TreeNode *pRoot)
	{
		if (!pRoot || pRoot->left == nullptr && pRoot->right == nullptr)
			return ;
		else
		{
			TreeNode *temp = (TreeNode *)malloc(sizeof(TreeNode));
			temp = pRoot->left;
			pRoot->left = pRoot->right;
			pRoot->right = temp;
			Mirror(pRoot->left);
			Mirror(pRoot->right);

		}
	}
};