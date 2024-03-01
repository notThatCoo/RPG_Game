#include "../header/dragonborn.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Dragonborn::Dragonborn(const string& name, const string& myClass) 
    : Character(DRAGONBORN, name, myClass, 100.0, 10.0, 10.0, 10.0, 10.0, 3) {
}

void Dragonborn::attack(Character &opp) {

    attackStrength = ((strength + intelligence) * 2) + ((dexterity + wisdom) * 1);

    if (rand() % 2 == 1) { attackStrength += 10; }

    double damage = rand() % (attackStrength + 1);
    
    opp.damage(damage);

}

void Dragonborn::flee() {


}