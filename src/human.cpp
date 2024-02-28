#include "Human.h"

// Constructor for the Human subclass
Human::Human(const std::string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence)
    : Character(HUMAN, name, health, speed, dexterity, strength, wisdom, intelligence) {
    // Additional initialization specific to Human if needed
}

// Optionally, you can define additional member functions for the Human subclass here
// For example:
void Human::specialAbility() {
    
    // Implement special ability for Human
}