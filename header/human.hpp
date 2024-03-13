#ifndef __HUMAN_HPP__
#define __HUMAN_HPP__

#include "../header/character.hpp"

using namespace std;

class Human : public Character {
 public:
    Human(Race, const string&, const string &, double , double, double, double, double, int);

};

#endif