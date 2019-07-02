#include <iostream>

extern "C" int doopa(int, int);

int main(int argc, char **argv)
{
	int a, b = 0;
	
	std::cin >> a;
	std::cin >> b;
	
	std::cout << doopa(a,b) << std::endl;
	
	return 0;
	
}

