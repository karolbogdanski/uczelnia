#pragma once
class BSTree
{
public:
	struct BSTNode {
		int val;
		BSTNode* left;
		BSTNode* right;
		BSTNode* parent;
	};
private:
	BSTNode* root;
public:
	BSTree();
	~BSTree();
	BSTNode* Root();
	BSTNode* Node(BSTNode*);
	int Insert(int val);
	int Insert2(int val);
	int PrintInOrder(BSTNode* node);
};

