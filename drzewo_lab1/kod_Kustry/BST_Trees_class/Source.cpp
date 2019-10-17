// Main.cpp : Defines the entry point for the console application.
//
#include "BSTree.h"
#include "IOO.h"


int main()
{
	BSTree tree;
	tree.Insert(5);
	tree.Insert(15);
	tree.Insert(-7);

	tree.PrintInOrder(tree.Root());
	
	return 0;
}