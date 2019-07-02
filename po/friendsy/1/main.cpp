#include <iostream>
#include <string>
#include "header.h"
#include "source.cpp"

using namespace std;

int main(int argc, char **argv)
{
	Samochod *opel = new Samochod;
	
	opel->drukuj(*opel);
	
	return 0;
}

