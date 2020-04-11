#include"Warrior.h"
#include"Character.h"
#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior(const string &name, double health, double attackStrength, const string & allegiance): Character(WARRIOR, name, health, attackStrength), allegiance(allegiance){}

void Warrior::attack(Character & opponent) {
    if(opponent.getType()==WARRIOR){
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if(opp.allegiance == this->allegiance){
            cout<<"Warrior "<< getName()<<" does not attack Warrior "<<opponent.getName()<<"."<<endl;
            cout<<"They share an allegiance with "<<allegiance<<"."<<endl;
            return;
        }
    }
    double damage=0;
    damage = (health/MAX_HEALTH)*attackStrength;
    opponent.damage(damage);
    cout<<"Warrior"<<" "<< getName()<<" attacks "<<opponent.getName()<<" --- SLASH!!"<<endl;
    cout<<opponent.getName()<<" takes "<<damage<<" damage."<<endl;
    return;
}

