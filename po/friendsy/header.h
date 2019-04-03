#include <string>
using namespace std;
#ifndef header_h 
#define header_h
class Silnik{
	
public:
	friend class Samochod;
	
	Silnik(int MOC, int MOMENT){
		this->moc = MOC;
		this->moment = MOMENT;
		
	}
	Silnik(){};
	
	void wypisz(); 
private:
	int moc;
	int moment;

};

class Samochod{
	
public:
	friend class silnik;
	
	Samochod(string MODEL="Asterka Boża", int MOC=666, int MOMENT=2137):silnik(MOC, MOMENT), model(MODEL){};
	
	void drukuj(Samochod samochod);
	
private:
	Silnik silnik;
	string model;

};

#endif
