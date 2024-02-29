#include "../header/human.hpp"
#include <iostream>

using namespace std;

// Constructor for the Human subclass
// Human::Human(const std::string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence)
//     : Character(HUMAN, name, health, speed, dexterity, strength, wisdom, intelligence) {
//     // Additional initialization specific to Human if needed
// }

Human::Human(const std::string& name) 
    : Character(HUMAN, name, 10.0, 10.0, 10.0, 10.0, 10.0, 10.0) {
    // Additional initialization specific to Human if needed
}

void Human::attack(Character &opp) {



}


// Optionally, you can define additional member functions for the Human subclass here
// For example:
void Human::specialAbility() {
    cout << this->name;
    // Implement special ability for Human
}