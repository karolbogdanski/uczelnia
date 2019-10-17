#ifndef _classBSTree_H_
#define _classBSTree_H_

#include <iostream>
#include "classBSTree.h"

using namespace std;

BSTree::BSTree()
{
    BSTree->root = NULL;
}

BSTree::~BSTree()
{
    cout << "DESTRUKCJA" << endl;
}

BSTree:: void insertBST(int x, node *P = NULL)
{
    if(root = NULL)
    {
        root = new node;
        root->val = x;
        root->R = NULL;
        root->L = NULL;
    }
    else
    {
        if(x < root->val)
        {
            insertBST(root->L, root);
        }

        else
        {
            insertBST(root->R, root);
        }
    }
}

BSTree:: void inOrder(root)
{
    if(root !=0)
    {
        inOrder(this->L);
        cout << " " << root->val;
        inOrder(this->R);
    }
}
#endif