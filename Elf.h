#ifndef __ELF_H__
#define __ELF_H__

#include"Character.h"
#include<string>
#include<iostream>

using namespace std;

class Elf : public Character {
private:
    string familyName;
public:
    Elf(const string&, double, double, const string&);
    void attack(Character& opponent);

};



#endif