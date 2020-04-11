#include <iostream>
#include "Character.h"

using namespace std;

Character::Character(HeroType type, const string &name, double health, double attackStrength): type(type), name(name), health(health), attackStrength(attackStrength){}


HeroType Character::getType() const{
    return this->type;
}

const string & Character::getName() const{
    return this->name;
}

int Character::getHealth() const{
    return static_cast<int>(health);
}

void Character::setHealth(double h){
    this->health = h;
}

void Character::damage(double d){
    health = health - d;
}

bool Character::isAlive() const{
    if(getHealth()>0){
        return true;
    }
    else{
        return false;
    }
}

