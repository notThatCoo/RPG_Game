#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include "../header/character.hpp" 

using namespace std;

class Human : public Character {
public:
    // Constructor for the Human subclass
    Human(const string &name, const string &myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing);

    Human(const string& name, const string& myClass);

    void attack(Character& ) override;

    void flee() override;

};

#endif