#ifndef _HEADER_H_
#define _HEADER_H_

#include <string>
class person{

friend void fill(person *&Karol);
    std::string name;
    std::string last_name;
    std::string gender;
    int age;

public:
    person();
    ~person();
    void intro();
};


#endif