
#ifndef funkcje_h
#define funkcje_h

static int licznik= 0;

int przeciecie(okrag &okr1, okrag &okr2){
	odcinek dl(okr1.srodek, okr2.srodek);
	if (dl.dlugoscOdcinka()>okr1.promien+okr2.promien)
		return 1; //rozłączne zewnętrznie
	else if(dl.dlugoscOdcinka()==0) // współśrodkowe
		return 6;
	else if (dl.dlugoscOdcinka()==okr1.promien+okr2.promien)
		return 2; // styczne zewnętrznie
	else if(dl.dlugoscOdcinka()<okr1.promien+okr2.promien && dl.dlugoscOdcinka()>abs(okr1.promien-okr2.promien))
		return 3; // przecinające się
	else if(dl.dlugoscOdcinka()==abs(okr1.promien-okr2.promien))
		return 4; // styczne wewnętrznie
	else 
		return 5; // rozłączne wewnętrznie

}


void wypisz(okrag &okr1, okrag &okr2, int wybor){
	
	int n = przeciecie(okr1, okr2);
	if(n!=wybor)
		return;
	licznik++;
	cout << "Środek i promień okręgu 1: ";
	okr1.wyswietl();
	okr1.wyswietl_r();
	cout << endl << "Środek i promień okręgu 2: ";
	okr2.wyswietl();
	okr2.wyswietl_r();
	cout << endl;
		
	switch (n){
		case 1:
			cout << "Rozłączne zewnętrznie" << endl;
			break;
		case 2:
			cout << "Styczne zewnętrznie" << endl;
			break;
		case 3:
			cout << "Przecinające się" << endl;
			break;
		case 4:
			cout << "Styczne wewnętrznie" << endl;
			break;
		case 5:
			cout << "Rozłączne wewnętrznie" << endl;
			break;
		case 6:
			cout << "Współśrodkowe" << endl;
			break;
		
		
	}
	
	
	
}



#endif
