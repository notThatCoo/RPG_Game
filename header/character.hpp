#include <string>

using namespace std;

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

enum Race{HUMAN, ELF, DRAGONBORN, DWARF, ENEMY};

class Character {
 protected:
	Race HeroRace;
	string HeroClass;
  string name;
  string myClass;
	double health;
	double dexterity;
  double strength;
  double wisdom;
  double intelligence;
  int attackStrength;
  int numHealing;

 public:
 	Character(Race, const string &, const string &, double, double, double, double, double, int);
  Character(Race, const string &, double, int, double);

 	void setStats(string c);
  Race getRace() const;
  const string& getName() const;
  double getHealth() const;
  int getNumHealing() const;
 	void damage(double d);
 	bool isAlive();

  virtual void attack(Character&) = 0;
  virtual void heal();
  virtual void flee();
 
 };

#endif