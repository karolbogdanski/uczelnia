#include <iostream>
#include <string>

using namespace std;

class Stary{
	
	string imie;
	int wiek;
	
	public:
	Stary(string = "Karol", int = 19);
	void wczytaj(Stary *p);
	void drukuj();
	
};

void Stary::drukuj(Stary x){
	cout << "Twój stary to:" << x.imie << " lat: " << x.wiek << endl;
	}

void Stary::wczytaj(Stary *stary){
	cin >> stary->imie;
	cin >> stary->wiek;
	}
