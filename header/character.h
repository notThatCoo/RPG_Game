#include <string>

using namespace std;

#ifndef __CHARACTER_H__
#define __CHARACTER_H__

enum Race{HUMAN, ELF, DRAGANOID, DWARF};


class Character {
 protected:
	Race HeroRace;
	string HeroClass;
    string name;
	double health;
	double dexterity;
    double strength;
    double wisdom;
    double intelligence;
    bool status;

 public:
 	Character(HeroRace, const string &, double, double, double, double, double);
 	HeroRace setStats(string c);
    HeroRace getReace();
    string getStats();
 	void damage(double d);
    void attack(character& );
 	bool isAlive();
 
 };

#endif