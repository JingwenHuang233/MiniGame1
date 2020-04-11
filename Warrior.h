#ifndef __WARRIOR_H__
#define __WARRIOR_H__

#include"Character.h"
#include<string>
#include<iostream>

using namespace std;

class Warrior : public Character {
private:
    string allegiance;
public:
    Warrior(const string&, double, double, const string&);
    void attack(Character& opponent);

};



#endif