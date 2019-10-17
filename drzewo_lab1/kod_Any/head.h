#include<iostream>
using namespace std;
class node {
private:
public:
	node *p;
	node *l;
	node *r;
	int val;


	void insert(node *&root, int x, node *p = NULL) {  //dodawawanie elementu
		if (root == NULL) {
			root = new node;
			root->val = x;
			root->l = root->r = NULL;
			root->p = p;
			cout << "wstawiamy: " << root->val << endl;
		}
		else if (x < root->val) {
			insert(root->l, x, root);
		}
		else {
			insert(root->r, x, root);
		}
	}

	void inorder(node *&root) {  //przeszukiwanie inorder
		if (root != NULL) {
			inorder(root->l);
			cout << root->val << " ";
			inorder(root->r);
		}
	}

	void preorder(node *&root) {  //przeszukiwanie preorder
		if (root != NULL) {
			cout << root->val << " ";
			preorder(root->l);
			preorder(root->r);
		}
	}

	void postorder(node *&root) { //przeszukiwanie postorder
		if (root != NULL) {
			postorder(root->l);
			postorder(root->r);
			cout << root->val << endl;
		}
	}


	node* search_rec(node *&root, int x) { //wyszukiwanie rekurencyjne
		if (root != NULL) {
			if (x == root->val) {
				cout << "wartosc znaleziona: " << root->val << endl;
				return root;
			}
			else if (x < root->val) {
				search_rec(root->l, x);
			}
			else {
				search_rec(root->r, x);
			}
		}

	}


	node* min(node *root) { //wyszukiwanie wezla o najmniejszym kluczu
		if (root != NULL) {
			while (root->l) {
				root = root->l;
			}

			cout << "minimalna wartosc to: " << root->val << endl;
			return root;
		}
	}

	node* max(node *root) {  //wyszukiwanie wezla o najwiekszym kluczu
		if (root != NULL) {
			while (root->r) {
				root = root->r;
			}

			cout << "maksymalna wartosc to: " << root->val << endl;
			return root;
		}

	}

	node* prev(node *root, int liczba) { //znajdowanie poprzednika
		root = search_rec(root, liczba);
		if (root->l != NULL) {
			cout << "poprzednik to: " << (max(root->l))->val << endl;
			return max(root->l);
		}
		else {
			while (root->p) {
				if (root->p->r == root) {
					cout << "poprzednik to: " << root->p->val << endl;
					return root->p;
				}
				else root = root->p;
			}
			cout << "nie ma poprzednika " << endl;
			return 0;
		}
	}

	node* next(node *root, int liczba) { //znajdowanie nastepnika
		root = search_rec(root, liczba);
		if (root->r != NULL) {
			cout << "nastepnik to: " << (min(root->r))->val << endl;
			return min(root->r);
		}
		else {
			while (root->p) {
				if (root->p->l == root) {
					cout << "nastepnik to: " << root->p->val << endl;
					return root->p;
				}
				else root = root->p;
			}
			cout << "nie ma nastepnika " << endl;
			return 0;
		}


	int counter(node *&root) { //licznik
		int i = 0;
		if (root == NULL) {
			return i;
		}
		else {
			i = 1;
			if (root->l) {
				i = i + counter(root->l);
			}
			if (root->r) {
				i = i + counter(root->r);
			}
		}
		return i;
	}

	float avg1(node *&root) { //srednia
		float average = 0;
		//average = root->val;
		if (root != NULL) {
			average = root->val;
			if (root->l) {
				average = average + avg1(root->l);
			}
			if (root->r) {
				average = average + avg1(root->r);
			}
		}
		return average;
	}

	float avg2(node *&root) {
		float i = float(counter(root));
		float average = (avg1(root)) / i;
		return average;
	}

	void rotateright(node *&root) {  //rotacja w prawo(bez balansu=warunku zachodzenia rotacji)
		if (root) {
			node *parent = root;
			root = root->l;
			node *temp = root->r;
			root->r = parent;
			parent->l = temp;
		}
	}

	void rotateleft(node *&root) {  //rotacja w lewo(bez balansu=warunku zachodzenia rotacji)
		if (root) {
			node *parent = root;
			root = root->r;
			node *temp = root->l;
			root->l = parent;
			parent->r = temp;
		}
	}

	void deleaves(node *&root) {  //usuwanie lisci
		if (root) {
			if ((root->l || root->r) == NULL) {
				if (root->p->l == root) {
					root->p->l = NULL;
				}
				else if (root->p->r == root) {
					root->p->r = NULL;
				}
				delete root;
			}
			else {
				deleaves(root->l);
				deleaves(root->r);
			}
		}
	}

	node* del(node *root, int x) //usuwanie dowolnego elementu(zamiana wartosci)
	{
		if (root == NULL) return root;
		else if (x < root->val)
			root->l = del(root->l, x);

		else if (x > root->val) {
			root->r = del(root->r, x);
		}
		else {
			if (root->r == NULL && root->l == NULL) {
				delete root;
				root = NULL;
			}
			else if (root->r == NULL) {
				node *pom = root;
				root = root->l;
				delete pom;
			}
			else if (root->l == NULL) {
				node *pom = root;
				root = root->r;
				delete pom;
			}
			else {
				node *pom = prev(root, x);
				root->val = pom->val;
				root->l = del(root->l, pom->val);
			}
		}
		return root;
	}

	node()
	{
		val = NULL;
		l = NULL;
		r = NULL;
		p = NULL;


	};
	~node();
};

