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

void delElementsBetween(node *H, int x, int y){
	
		node *p = H;
		
		while(p != NULL){
			
			if(p->val == x ){
				while(p->next->val != y){
					node *temp = p->next->next;
					delete p->next;
					p->next = temp;
					
					//p = p->next;
				}
			}
				
			
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
	push(H, 6);
	push(H, 7);
	push(H, 8);
	push(H, 9);
	push(H, 10);
	show(H);
	
	delElementsBetween(H, 8, 1);
	
	show(H);
		
	return 0;
}

