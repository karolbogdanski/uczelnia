#include <iostream>
#include "header.h"

using namespace std;



int main(int argc, char **argv)
{
	Circle *okrag = new Circle;
	
	cout << okrag->radius << "|" << okrag->centre.x << "," << okrag->centre.y << endl;
	
	return 0;
}

