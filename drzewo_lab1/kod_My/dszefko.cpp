#include <iostream>

using namespace std;

struct node
{

    int val;
    node *R; //right
    node *L; //left
    node *P; //parent

};

void insertBST(node *&root, int x, node *P = 0)
{
    if(root == NULL)
    {
        root = new node;
        root->val = x;
        root->R = NULL;
        root->L = NULL;
        root->P = P;
    }
    else if(x < root->val)
    {
        insertBST(root->L, x, root);
    }
    else
    {
        insertBST(root->R, x, root);
    }
}

void inOrder(node *root)
{
    if (root != NULL){
        inOrder(root->L);
        cout << " " << root->val;
        inOrder(root->R);
    }
}

void preOrder(node *root)
{
    if(root != NULL)
    {
        cout << " " << root->val;
        preOrder(root->L);
        preOrder(root->R);
    }
}

void postOrder(node *root)
{
    if(root != NULL)
    {
        postOrder(root->L);
        postOrder(root->R);
        cout << " " << root->val;
    }
}

void deleteLeaves(node *&root)  //sposób Any
{
    if(root != NULL)
    {
        if (root) {
			if ((root->L || root->R) == NULL) {
				if (root->P->L == root) {
					root->P->L = NULL;
				}
				else if (root->P->R == root) {
					root->P->R = NULL;
				}
				delete root;
			}
			else {
				deleteLeaves(root->L);
				deleteLeaves(root->R);
			}
		}
    }
}

node *usunLiscie(node *root){  //sposób Wixa

    if (root != NULL){

        if(root->L == NULL && root->R == NULL){

            delete root;
            return NULL;
        }
        else
        {
            root->L =usunLiscie(root->L);
            root->R =usunLiscie(root->R);
        }

    }
    return root;
}

int countNodes(node *root)
{
    int counter = 0;

    if(root == NULL)
    {
        return counter;
    }
    else
    {
        counter = 1;
        if(root->L)
        {
            counter += countNodes(root->L);
        }

         if(root->R)
        {
            counter += countNodes(root->R);
        }

    return counter;
    }
}

int maxBST(node *root)
{
    int max = 0;
    if (root == NULL)
    {
        return max;
    }
    else
    {
        if(root->R)
        {
        max = maxBST(root->R);
        }
        else
        {
        max = root->val;
        }
    }
    return max;
}

int minBST(node *root)
{
    int min = 0;

    if(root == NULL)
    {
        return min;
    }
    else
    {
        if(root->L)
        {
            min = minBST(root->L);
        }
        else
        {
            min = root->val;
        }

    }
    return min;
}

int sumarize(node *root)
{
    float sum = 0;

    if(root)
    {
        sum = root->val;
        if(root->L)
        {
        sum += sumarize(root->L);
        }
        if(root->R)
        {
        sum += sumarize(root->R);
        }
    }
    return sum;

}

float avarage(node *root)
{
    return sumarize(root)/countNodes(root);
}


int main()
{
    node *root = NULL;
    insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 2);
    insertBST(root, 4);
    insertBST(root, 7);
    insertBST(root, 6);
    insertBST(root, 8);

    cout << countNodes(root) << endl;
    //cout << maxBST(root) << endl;
    //cout << minBST(root) << endl;
    cout << avarage(root) << endl;



    //deleteLeaves(root);
    //usunLiscie(root);
    //inOrder(root);
    /*cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);*/

    return 0;

}