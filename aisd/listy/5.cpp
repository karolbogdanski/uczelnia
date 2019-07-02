#include <iostream>

using namespace std;

struct node{

	int val;
	node *next;
};

void push(node *&H, int x){
	
	node *p = new node;
	
	p->val=x;
	p->next=H;
	H=p;
	
}

void show(node *H){

	node *p=H;
	
	cout<<"HEAD->";
	while(p!=NULL){
		
		cout << p->val << "->"; 
		p=p->next;
	}
	cout << "NULL" << endl << endl;

}

void delElement(node *&H, int x){

	node *p = H;
	
	while(p !=NULL){
		
		if(p->next != NULL && p->next->val == x){
			
			node *temp = p->next;
			delete p->next;
			p->next = temp->next;
			
			}
		
		p = p->next;
	}

}

int main(){
	
	node *H = NULL;
	
	push(H, 1);
	push(H, 2);
	push(H, 3);
	push(H, 4);
	push(H, 5);

	show(H);
	
	delElement(H, 3);
	
	show(H);

	return 0;
}
