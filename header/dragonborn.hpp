#ifndef __DRAGONBORN_HPP__
#define __DRAGONBORN_HPP__

#include "../header/character.hpp" 

using namespace std;

class Dragonborn : public Character {
public:
    // Constructor for the Dragonborn subclass
    Dragonborn(Race, const string &name, const string &myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing);

    double attack(Character&) override;

};

#endif