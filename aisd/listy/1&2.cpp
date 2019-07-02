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

void MakeItDouble(node *H){
	
	node *p = H;
	
	while(p != NULL){
		for(int i = 1; i < p->val; i++){
			push(p->next, p->val);
			p = p->next;
		}p = p->next;
	} 
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
	
	MakeItDouble(H);
	show(H);
	
	
	return 0;
}

