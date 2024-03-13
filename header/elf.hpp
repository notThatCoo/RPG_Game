#ifndef __ELF_HPP__
#define __ELF_HPP__

#include "../header/character.hpp"

using namespace std;

class Elf : public Character {
 public:
    Elf(Race, const string&, const string &, double , double, double, double, double, int);

};

#endif