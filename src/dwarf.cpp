#include "../header/dwarf.hpp"
#include <iostream>

using namespace std;

Dwarf::Dwarf(Race HeroRace, const string&name, const string &myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing)
    : Character (DWARF, name, myClass, health, dexterity, strength, wisdom, intelligence, numHealing){}

void Dwarf::heal() { 

    if (numHealing > 1) { 

        health += 100;
        --numHealing;

    }
    else { cout << "No healing items left" << endl; }
  
}