#include <string>

using namespace std;

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

enum Race{HUMAN, ELF, DRAGANOID, DWARF};

class Character {
 protected:
	Race HeroRace;
	string HeroClass;
  string name;
	double health;
  double speed;
	double dexterity;
  double strength;
  double wisdom;
  double intelligence;

 public:
 	Character(Race, const string &, double, double, double, double, double, double);
 	void setStats(string c);
  Race getRace() const;
  const string& getName() const;
  double getHealth() const;
 	void damage(double d);
 	bool isAlive();
  virtual void attack(Character&) =  0;
  virtual void heal();
  virtual void flee();
 
 };

#endif