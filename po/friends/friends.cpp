
#include "head.h"

using namespace std;


int main(int argc, char **argv)
{	
	Stary duzy_karol("Żoopa", 19);
	Stary *p = &duzy_karol;
	
	Stary::wczytaj(p);
	Stary::drukuj(duzy_karol);
	
	return 0;
}

