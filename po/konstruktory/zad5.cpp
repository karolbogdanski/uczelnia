#include <iostream>
#include <string>
using namespace std;

class Osoba{

private:
	int x;
	int y;
	string imie;

	
public:

	Osoba(){
		this->x = 2;
		this->y = 3;
		this->imie = "Karol";
		}
	Osoba(int X, int Y, string IMIE){
		this->x = X;
		this->y = Y;
		this->imie = IMIE;
		}
	Osoba(Osoba &wzor){
		imie = "nic";
		x = wzor.x;
		y = wzor.y;
		
		}
	
	void drukuj(Osoba osoba){
		cout << "Imie: " << this->imie << endl;
		cout << "x: " << osoba.x << endl;
		cout << "y: " << osoba.y << endl;
		
		
	}
		
};

int main(int argc, char **argv)
{
	Osoba Karol;
	Osoba nieKarol(6,9, "nieKarol");
	
	Karol.drukuj(Karol);
	nieKarol.drukuj(nieKarol);
	
	Osoba Dupa(Karol);
	
	cout << endl;
	
	Karol.drukuj(Karol);
	nieKarol.drukuj(nieKarol);
	Dupa.drukuj(Dupa);
	
	return 0;
}

