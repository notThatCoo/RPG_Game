#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

enum RaceType {Human, Elf, Dwarf, Dragonborn};

enum ClassType {Knight, Archer, Assassin, Wizard};

double health = 10.0;

class Character {
 protected:
	RaceType type1;

    ClassType type2;



 public:
 	Character(RaceType, ClassType);
 };

#endif