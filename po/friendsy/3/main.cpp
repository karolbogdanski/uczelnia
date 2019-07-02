#include <iostream>
#include <string>
#include "header.h"
#include "source.cpp"

using namespace std;

int main(){
	
	Circle c1 = new Circle(3, 0, 0);
	Circle c2 = new Circle(4, 3, 3);
	
	if(Cirlce.TheyCross(c1, c2) == true)
		cout<< "true"<< endl;
	else
		cout<< "false"<< endl;
	
	return 0;
	}
