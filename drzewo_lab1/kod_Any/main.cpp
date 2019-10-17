#include<iostream>
#include"head.h"

using namespace std;

int main()
{
	node *root = NULL;
	root->insert(root, 5, root);
	root->insert(root, 3, root);
	root->insert(root, 7, root);
	root->insert(root, 2, root);
	root->insert(root, 4, root);
	root->insert(root, 6, root);
	root->insert(root, 8, root);
	root->inorder(root);
	root->next(root, 7);

	return 0;
}

