#ifndef __DWARF_HPP__
#define __DWARF_HPP__

#include "../header/character.hpp"

using namespace std;

class Dwarf : public Character {
 public:
    Dwarf(Race, const string&, const string &, double , double, double, double, double, int);

    void heal() override;

};

#endif