#include "gtest/gtest.h"
#include "../src/human.cpp"
#include "../src/enemy.cpp"
#include "../src/elf.cpp"
#include "../src/dwarf.cpp"
#include "../src/dragonborn.cpp"
#include "../src/character.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
vector<Character*> characters;
TEST(Charactertest, human_setup) {
    //vector<Character*> characters;
    character *acharacter = new Human(HUMAN, "bob", "Knight", 100,10,10,10,10,5);
    //characters.push_back(new Human(HUMAN, "bob", "Knight", 100,10,10,10,10,5));
    EXPECT_NO_THROW(acharacters[0]->setStats("Kinght"));
}

TEST(Charactertest, elf_setup) {
   //vector<Character*> characters;
    characters.push_back(new Elf(ELF, "bob", "Knight", 80,13,6,12,11,5));
    EXPECT_NO_THROW(characters[1]->setStats("Kinght"));
}

TEST(Charactertest, dwarf_setup) {
    //vector<Character*> characters;
    characters.push_back(new Dwarf(DWARF, "bob", "Knight", 130,5,13,11,8,10));
    EXPECT_NO_THROW(characters[2]->setStats("Kinght"));
}

TEST(Charactertest, dragonborn_setup) {
    //vector<Character*> characters;
    characters.push_back(new Dragonborn(DRAGONBORN, "bob", "Knight", 100,5,11,12,2,5));
    EXPECT_NO_THROW(characters[3]->setStats("Kinght"));
}
