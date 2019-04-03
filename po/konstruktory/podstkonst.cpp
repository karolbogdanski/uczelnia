#include <iostream>
using namespace std;

class Klasa{
	
public:
	Klasa(int dana1 = 21, int dana2 = 37){
		this->x = dana1;
		this->y = dana2;
		cout <<endl << "Jan Paweł II gwałcił dzieci \n"; 
		}

	int x;
	int y; 
	
};

int main(int argc, char **argv)
{
	Klasa goowno;
	
	cout << "Papiesz zdech: " << goowno.x << goowno.y <<endl;
	
	Klasa *chuj = new Klasa;
	
	chuj->x=14;
	chuj->y=88;
	
	cout << "Hitler was right. Praise the Fuhrer: " << chuj->x << chuj->y << endl;
	
	
	
	
	return 0;
}

