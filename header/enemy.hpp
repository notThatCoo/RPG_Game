#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include "../header/character.hpp"

using namespace std;

class Enemy : public Character {
 public:

    Enemy(const string &, double, int);

    void attack(Character&);

};









#endif