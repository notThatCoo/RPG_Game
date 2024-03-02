#ifndef __INTERACTION_HPP__
#define __INTERACTION_HPP_

#include "../header/character.hpp"
#include "../header/enemy.hpp"
#include "../header/human.hpp"
#include "../header/dwarf.hpp"
#include "../header/dragonborn.hpp"
#include "../header/elf.hpp"

using namespace std;

class Interaction : public Character {

 public:

    void gameplay();

};

#endif
