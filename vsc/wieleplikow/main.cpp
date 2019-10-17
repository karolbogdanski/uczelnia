#include <iostream>
#include <string>
#include "header.h"
#include "source.cpp"

using namespace std;


int main(){

    person Karol;
    Karol.intro();

    person *p = &Karol;
    fill(p);
    Karol.intro();

    return 0;
}
