#include <iostream>
#include "../header/character.hpp"
using namespace std;

Character::Character(Race HeroRace, const string &name, const string& myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing)
: HeroRace(HeroRace), name(name), myClass(myClass), health(health), dexterity(dexterity), strength(strength), wisdom(wisdom), intelligence(intelligence), numHealing(numHealing) {}

Character::Character() {}

Character::Character(Race HeroRace, const string &name, double health, double maxHealth)
: HeroRace(HeroRace), name(name), health(health), maxHealth(maxHealth) {}

void Character::setStats(string c){
    if (c == "Knight"){
        health += 20;
        dexterity -= 1;
        strength += 2;
        wisdom -= 4;
        intelligence +=1;
    }
    if(c== "Archer"){
        dexterity += 3;
        strength -= 2;
        wisdom += 2;
        intelligence -=3;
    }
    if(c== "Wizard"){
        health -= 10;
        dexterity -= 3;
        strength -= 2;
        wisdom += 3;
        intelligence +=3;
    }
    if(c== "Assassin"){
        health -= 20;
        dexterity += 2;
        strength += 2;
        wisdom -= 2;
    }
}

void Character::setHealth(double newHealth) { health = health * newHealth; }

void Character::setHealthTo150() { health = 150; }

void Character::setStrength(double multiplier) { strength = strength * multiplier; }

void Character::setWisdom(double multiplier) { wisdom = wisdom * multiplier; }

void Character::setIntelligence(double multiplier) { intelligence = intelligence * multiplier; }

Race Character::getRace() const { return HeroRace; }

const string &Character::getClass() const { return myClass; }

const string &Character::getName() const { return name; }

double Character::getHealth() const {return health; }

int Character::getNumHealing() const { return numHealing; }

int Character::getAttackStrength(Character &you) const {

    if (you.getClass() == "Knight") {

        return ((you.getStrength() + you.getIntelligence()) * 2) + ((you.getDexterity() + you.getWisdom()) * 1);

    }
    else if (you.getClass() == "Archer") {

        return ((you.getStrength() + you.getIntelligence()) * 1) + ((you.getDexterity() + you.getWisdom()) * 2);

    }
    else if (you.getClass() == "Wizard") {

        return ((you.getWisdom() + you.getIntelligence()) * 2) + ((you.getDexterity() + you.getStrength()) * 1);

    }
    else if (you.getClass() == "Assassin") {

        return ((you.getStrength() + you.getDexterity()) * 2) + ((you.getIntelligence() + you.getWisdom()) * 1);
    }
    else { return 1; }
}

double Character::getStrength() const { return strength; }
double Character::getWisdom() const { return wisdom; }
double Character::getDexterity() const { return dexterity; }
double Character::getIntelligence() const { return intelligence; }

double Character::getMaxHealth() const { return maxHealth; }

void Character::damage(double d) { health -= d; }

bool Character::isAlive(){

    if(health < 1){ return false; }
    else { return true; }
  
}

double Character::attack(Character &player) {

    double damage = rand() % (getAttackStrength(player) + 1);

    return damage;
}

void Character::heal() { 

    if (numHealing > 1) { 

        health += 50;
        --numHealing;

    }
    else { cout << "No healing items left" << endl; }
  
}