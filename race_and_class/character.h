#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

enum RaceType {Human, Elf, Dwarf, Dragonborn};

enum ClassType {Knight, Archer, Assassin, Wizard};

class Character {
 protected:
	RaceType type1;
    ClassType type2;

    int raceType;
    int classType;

    double health;
    double speed;
    double dexterity;
    double strength;
    double wisdom;
    double intelligence;

 public:
 	Character(RaceType, ClassType, double, double, double, double, double, double);

    void CreatingCharacter();
 };

#endif