#include <stddef.h>
#include <stdio.h>
#include "BSTree.h"

BSTree::BSTree()
{
	root = NULL;
}

BSTree::~BSTree()
{
}

BSTree::BSTNode* BSTree::Node(BSTNode* node) {
	return node;
}

BSTree::BSTNode* BSTree::Root() {
	return root;
}

int BSTree::Insert(int val) {
	BSTNode* x = new BSTNode;
	x->val = val;
	x->left = x->right = x->parent = NULL;
	
	if (root == NULL) {
		root = x;
		return 1;
	}
	BSTNode* par = NULL;
	BSTNode* son = root;
	while (son) {
		par = son;
		if (par->val > val)
			son = par->left;
		else
			son = par->right;
	}
	x->parent = par;
	if (par->val > val)
		par->left = x;
	else
		par->right = x;

	return 1;
}

int BSTree::Insert2(int val) {
	BSTNode* x = new BSTNode;
	x->val = val;
	x->left = x->right = x->parent = NULL;
	
	if (root == NULL) {
		root = x;
		return 1;
	}
	BSTNode* par = NULL;
	BSTNode* son = root;
	
	while (son) {
		par = son;
		if (par->val > val)
			son = par->left;
		else
			son = par->right;
	}
	x->parent = par;
	if (par->val > val)
		par->left = x;
	else
		par->right = x;

	return 1;
}



int BSTree::PrintInOrder(BSTree::BSTNode *node) {
	if (node == NULL) return 1;
	if (root->left)
		BSTree::PrintInOrder(node->left);
	printf("%d\n", node->val); //wypisz node->val;
	if(root->right)
		BSTree::PrintInOrder(node->right);

	return 1;
}
