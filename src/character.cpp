#include <iostream>
#include "../header/character.hpp"
using namespace std;

Character::Character(Race HeroRace, const string &name, const string& myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing)
: HeroRace(HeroRace), name(name), myClass(myClass), health(health), dexterity(dexterity), strength(strength), wisdom(wisdom), intelligence(intelligence), numHealing(numHealing) {}

void Character::setStats(string c){
    if (c == "Knight"|| c== "knight"){
        health += 2;
        dexterity -= 1;
        strength += 2;
        wisdom -= 4;
        intelligence +=1;
    }
    if(c== "Archer"|| c== "archer"){
        dexterity += 3;
        strength -= 2;
        wisdom += 2;
        intelligence -=3;
    }
    if(c== "Wizard" || c== "wizard"){
        health -= 1;
        dexterity -= 3;
        strength -= 2;
        wisdom += 3;
        intelligence +=3;
    }
    if(c== "Assassin" || c== "Assassin"){
        health -= 1;
        dexterity += 2;
        strength += 1;
        wisdom -= 2;
    }

}
Race Character::getRace() const { return HeroRace; }

const string &Character::getName() const { return name; }

double Character::getHealth() const {return health; }

void Character::damage(double d) { health -= d; }

bool Character::isAlive(){
    
    if(health < 1){ return false; }
    else { return true; }
}

void Character::heal() { 

    if (numHealing > 1) { 

        health += 50;
        --numHealing;

    }
    else { cout << "No healing items left" << endl; }

}