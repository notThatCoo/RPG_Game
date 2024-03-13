#ifndef __ENEMY_HPP__
#define __ENEMY_HPP__

#include "../header/character.hpp"

using namespace std;

class Enemy : public Character {
 public:

    Enemy(Race, const string &, double, double);

};

#endif