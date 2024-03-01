#include "../header/human.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

// Constructor for the Human subclass
// Human::Human(const std::string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence)
//     : Character(HUMAN, name, health, speed, dexterity, strength, wisdom, intelligence) {
//     // Additional initialization specific to Human if needed
// }

Human::Human(const string& name, const string& myClass) 
    : Character(HUMAN, name, myClass, 100.0, 10.0, 10.0, 10.0, 10.0, 3) {
    // Additional initialization specific to Human if needed
}

void Human::attack(Character &opp) {

    attackStrength = ((strength + intelligence) * 2) + ((dexterity + wisdom) * 1);

    double damage = rand() % (attackStrength + 1);
    
    opp.damage(damage);

}

void Human::flee() {


}