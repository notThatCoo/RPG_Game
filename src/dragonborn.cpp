#include "../header/dragonborn.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Dragonborn::Dragonborn(Race HeroRace, const string& name, const string& myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing) 
    : Character(DRAGONBORN, name, myClass, health, dexterity, strength, wisdom, intelligence, numHealing) {
}

double Dragonborn::attack(Character &player) {

    double attackStrenght =getAttackStrength(player);

    if (rand() % 2 == 1) { attackStrength += 10; }

    double damage = rand() % (attackStrength + 1);
    
    return damage;

}