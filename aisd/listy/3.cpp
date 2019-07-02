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


void pull(node *H){
	
	node *p = H;
	
	cout << "Head->";
	while(p != NULL){
		cout << p->val << "->";
		p=p->next;	
	}
	cout << "NULL" << endl << endl;
}

void delElementAfter(node *&H, int x){
	
	node *p = H;
	
	while(p != NULL){
		
		if(p->val == x && p->next != NULL){
			node *temp = p->next->next;
			delete p->next;
			p->next = temp;
		}else if(p->val == x)
			p->next = NULL;
		
	p = p->next;
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
	
	pull(H);
	
	delElementAfter(H, 5);
	pull(H);
	
	
	return 0;
}

