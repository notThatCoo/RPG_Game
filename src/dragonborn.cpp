#include "../header/dragonborn.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Dragonborn::Dragonborn(const string& name, const string& myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing) 
    : Character(DRAGONBORN, name, myClass, health, dexterity, strength, wisdom, intelligence, numHealing) {
}

void Dragonborn::attack(Character &you, Character &opp) {

    attackStrength = getAttackStrength(you);

    if (rand() % 2 == 1) { attackStrength += 10; }

    double damage = rand() % (attackStrength + 1);
    
    opp.damage(damage);

}

void Dragonborn::flee() {

    cout << getStrength();
}