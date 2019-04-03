#include <iostream>
#include <string>
using namespace std;

class Osoba{

private:
	string imie;
	const int wiek;
	const int wzrost;
	
public:
	Osoba(string IMIE, int WIEK = 20, int WZROST = 180):wiek(WIEK), wzrost(WZROST){
	this->imie=IMIE;
	}
	
	void drukuj(Osoba osoba){
		cout << "Imie: " << this->imie << endl;
		cout << "wiek: " << this->wiek << endl;
		cout << "y: " << this->wzrost << endl;
	}
};

int main(int argc, char **argv)
{
	Osoba Karol("Karol");
	
	Karol.drukuj(Karol);
	
	return 0;
}

