#ifndef __HUMAN_H__
#define __HUMAN_H__

#include "Character.h" 

class Human : public Character {
public:
    // Constructor for the Human subclass
    Human(const std::string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence);

    // Additional member functions specific to Human if needed
    // For example, you could add functions for Human-specific behavior or abilities
};

#endif