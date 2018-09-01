#include <vector>
#include <iostream>
using namespace std;
//Definition for binary tree
struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution 
{
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) 
	{
		if (pre.size() != vin.size()|| pre.size()==0||vin.size()==0)
			return nullptr;
		TreeNode *btree = (TreeNode*)malloc(sizeof(TreeNode));
		vector<int> left_pre, right_pre;
		vector<int> left_vin, right_vin;

		int len = pre.size();
		int index = distance(vin.begin(), find(vin.begin(), vin.end(), pre[0]));
		for (int i = 0; i<index; i++) 
		{
			left_pre.push_back(pre[i + 1]);
			left_vin.push_back(vin[i]);
		}
		for (int i = index + 1; i<len; i++) 
		{
			right_pre.push_back(pre[i]);
			right_vin.push_back(vin[i]);
		}
		btree->val = pre[0];
		btree->left = reConstructBinaryTree(left_pre, left_vin);
		btree->right = reConstructBinaryTree(right_pre, right_vin);
		return btree;
	}
};