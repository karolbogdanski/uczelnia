#include <iostream>
#include <string>
using namespace std;

class Student{
	
public:
	Student(string IMIE, string NAZWISKO,int ROK, int GRUPA){
		this->imie = IMIE;
		this->nazwisko = NAZWISKO;
		this->rok = ROK;
		this->grupa = GRUPA;
	}
	
	Student(){
		this->imie = "BRAK DANYCH";
		this->nazwisko = "BRAK DANYCH";
		this->rok = 0;
		this->grupa = 0;
	}
	void drukuj(Student s){
		cout << "imie: " << this->imie << endl;
		cout << "nazwisko: " << this->nazwisko << endl;
		cout << "rok: " << this->rok << endl;
		cout << "grupa: " << this->grupa << endl;
		}
private:
	string nazwisko;
	string imie;
	int rok;
	int grupa; 
	
};

int main(int argc, char **argv)
{
	Student s1("Stachu?","A kto przy telefonie?", 21, 37 );
	Student s2("Jest Stachu w domu?", "Nie ma, kto mówi", 14, 88);
	Student s3("To jest Jadzia", "Na chuj on mnie tam łaził po centrali", 69, 69);
	Student s4("chuj", "dupa",11,13);
	Student s5("kurwa", "cipa", 21, 37);
	Student s6;
	
	s1.drukuj(s1);
	s2.drukuj(s2);
	s3.drukuj(s3);
	s4.drukuj(s4);
	s5.drukuj(s5);
	s6.drukuj(s6);
	
	
	return 0;
}

