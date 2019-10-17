#include <iostream>
#include <string>
#include "header.h"

using namespace std;


void person::intro(){

    cout << "name: " << this->name << endl;
    cout << "lastname: " << this->last_name << endl;
    cout << "gender: " << this->gender << endl;
    cout << "age: " << this->age << endl;
}
person::person(){

    name= "default";
    last_name= "default";
    gender= "default";
    age= 0;

}

person::~person(){

    cout << "Tell my wife I loved her" << endl;

}

void fill(person *&Karol){

    Karol->name = "Karol";
    Karol->last_name = "Chuj";
    Karol->gender = "Pedal";
    Karol->age = 2137;

}