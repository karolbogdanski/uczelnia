#include <iostream>
#include <string>
#include "header.h"

using namespace std;

void Samochod::drukuj(Samochod samochod){
	cout << "Model: " << this->model << endl;
	cout << "Moc: " <<  samochod.silnik.moc << endl;
	cout << "Moment: "<< samochod.silnik.moment << endl;
}



