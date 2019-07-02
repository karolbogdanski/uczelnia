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

//void reverseCopy(node *H, node *&H2){
	
	void zadanie6(node *&h)
{
	cout << "ZADANIE6:" << endl;
	node *h2=NULL;
	node *p=h;
	while(p!=NULL)
	{
		push(h2,p->val);
		p=p->next;
	}
	show(h2);	
}
	
//}


int main(int argc, char **argv)
{
	node *H = NULL;
	//node *H2 = NULL;
	
	
	push(H, 1);
	push(H, 2);
	push(H, 3);
	push(H, 4);
	push(H, 5);
	
	show(H);
	
	zadanie6(H);
	
	//show(H2);
	show(H);
	
	return 0;
}

