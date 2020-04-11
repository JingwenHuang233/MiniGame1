
#ifndef __WIZARD_H__
#define __WIZARD_H__

#include"Character.h"
#include <iostream>
#include<string>

using namespace std;

class Wizard : public Character {
private:
    int rank;
public:
    Wizard(const string&, double, double, int);
    void attack(Character& opponent);

};



#endif