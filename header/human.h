#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "../header/character.h" 

class Human : public Character {
public:
    // Constructor for the Human subclass
    Human(const std::string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence);

    Human(const std::string&);


    // Additional member functions specific to Human if needed
    // For example, you could add functions for Human-specific behavior or abilities
    void specialAbility();
};

#endif