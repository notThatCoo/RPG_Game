#include "../header/elf.hpp"

using namespace std;

Elf::Elf(Race HeroRace, const string&name, const string &myClass, double health, double dexterity, double strength, double wisdom, double intelligence, int numHealing)
    : Character (ELF, name, myClass, health, dexterity, strength, wisdom, intelligence, numHealing){}