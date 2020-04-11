#include"Wizard.h"
#include"Character.h"
#include <iostream>
#include <string>

using namespace std;

Wizard::Wizard(const string &name, double health, double attackStrength, int rank):Character(WIZARD, name, health, attackStrength), rank(rank){}

void Wizard::attack(Character & opponent) {
    double damage=0;
    if(opponent.getType()==WIZARD){
        Wizard &opp = dynamic_cast<Wizard &>(opponent);
        damage = attackStrength*(static_cast<double>(this->rank)/static_cast<double>(opp.rank));
        opponent.damage(damage);
        cout<<"Wizard"<<" "<< getName()<<" attacks "<<opponent.getName()<<" --- POOF!!"<<endl;
        cout<<opponent.getName()<<" takes "<<damage<<" damage."<<endl;
        return;
    }
    
    damage = attackStrength;
    opponent.damage(damage);
    cout<<"Wizard"<<" "<< getName()<<" attacks "<<opponent.getName()<<" --- POOF!!"<<endl;
    cout<<opponent.getName()<<" takes "<<damage<<" damage."<<endl;
    return;
}