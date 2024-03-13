#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include "../header/character.hpp"

using namespace std;

class Enemy : public Character {
 private:
  double maxHealth; 

 public:

    Enemy(const string &, double, int, double);

    void attack(Character&);

};

#endif