#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include "../header/character.hpp" 

using namespace std;

class Human : public Character {
public:
    // Constructor for the Human subclass
    Human(const string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence);

    Human(const string& name);

    void attack(Character& ) override;

    // Additional member functions specific to Human if needed
    // For example, you could add functions for Human-specific behavior or abilities
    void specialAbility();
};

#endif