#ifndef _classBSTree_H_
#define _classBSTree_H_

#include <iostream>
#include "classBSTree.h"
#include "source.h"

using namespace std;

int main()
{
    BSTree::node *root = NULL;
    root.insertBST(5);
    root.insertBST(3);
    root.insertBST(2);
    root.insertBST(4);
    root.insertBST(7);
    root.insertBST(6);
    root.insertBST(8);
    root.inOrder;
    return 0;
}
#endif