#ifndef okrag_h
#define okrag_h

int okrag::licznik = 0;

void okrag::wyswietl(){
	cout << "(" << srodek.pobierzX() << "," << srodek.pobierzY() << ") ";
}
void okrag::wyswietl_r(){
	cout << this->promien;
}



okrag::okrag(punkt SRODEK, float PROMIEN): srodek(SRODEK), promien(PROMIEN){
	licznik++;
}

okrag::okrag(){
	this->promien=rand()%10+1;
	licznik++;
}
okrag::~okrag(){
	licznik--;
}




#endif
