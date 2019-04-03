#include <iostream>

using namespace std;

struct node{
	
	int val;
	node *next;
	
};

void add(node *&H, int x){
	
	node *p = new node;
	p->val = x;
	p->next = H;
	H=p;
}

void show(node *H){
	node *p = H;
	cout << "Head->";
	while(p != NULL){
		cout << p->val << "->";
		p = p->next;
		}
	cout << "NULL" << endl;
}

int main(int argc, char **argv)
{
	node *H = NULL;
	add(H, 5);
	add(H, 4);
	add(H, 3);
	add(H, 2);
	add(H, 1);
	
	show(H);
	
	return 0;
}

