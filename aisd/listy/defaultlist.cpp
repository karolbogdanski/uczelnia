#include <iostream>

using namespace std;

struct node{
	
	int val;
	node *next;
};

void push(node *&H, int x){
	
	node *p = new node;
	p->val = x;
	p->next = H;
	H = p;
	
}


void show(node *H){
	
	node *p = H;
	
	cout << "Head->";
	while(p != NULL){
		cout << p->val << "->";
		p=p->next;	
	}
	cout << "NULL" << endl << endl;
}

void reverse(node*H){
	
	node *p = H;
	node *H2 = NULL;
	
	while(p != NULL){
		
		push(H2, p->val);
		
		p=p->next;
		}
	show(H2);
	}


int main(int argc, char **argv)
{
	node *H = NULL;
	
	push(H, 1);
	push(H, 2);
	push(H, 3);
	push(H, 4);
	push(H, 5);
	
	show(H);
	
	reverse(H);
	
	return 0;
}

