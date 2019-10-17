#ifndef _classBSTree_H_
#define _classBSTree_H_

#include <iostream>

class BSTree{

    class node{

        int val;
        node *R;
        node *L;
        node *P;
        friend BSTree;
    };
    node *root;
public:
    BSTree();
    ~BSTree();
    void insertBST(int x, node *P = NULL);
    void inOrder(root);
    //void postOrder(root);
    //void preOrder(root);
};
#endif