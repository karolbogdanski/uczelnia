#include <iostream>
#include <string>
using namespace std;

class Figura{
	
public:

	Figura(){
		this->a = 0;
		this->b = 0;
		}
	Figura(int A){
		this->a = A;
		this->b = 0;
		}
	Figura(int A, int B){
		this->a = A;
		this->b = B;
		}
	~Figura (){
		cout << "Na razie skurwysyny!" << endl;
		}
	void drukuj(Figura f){
		cout << "a: " << f.a << endl;
		cout << "b: " << f.b << endl;
	}
	void drukuj2(Figura *f){
		cout << "a: " << f->a << endl;
		cout << "b: " << f->b << endl;
	}
private:
	int	a;
	int	b;

};

int main(int argc, char **argv)
{
	Figura f1;
	Figura f2(1488);
	Figura f3(21, 37);
	Figura *f4 = new Figura;
	
	f1.drukuj(f1);
	f2.drukuj(f2);
	f3.drukuj(f3);
	f4->drukuj(*f4);
	
	return 0;
}

