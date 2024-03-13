#include "../header/human.hpp"

using namespace std;

Human::Human(Race HeroRace, const string &name, const string &myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing)
    : Character (HUMAN, name, myClass, health, dexterity, strength, wisdom, intelligence, numHealing){}