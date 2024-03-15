
#include "gtest/gtest.h"
#include "../src/interaction.cpp"
#include "../header/interaction.hpp"
#include "../src/human.cpp"
#include "../header/human.hpp"
#include "../src/enemy.cpp"
#include "../header/enemy.hpp"
#include "../src/elf.cpp"
#include "../header/elf.hpp"
#include "../src/dwarf.cpp"
#include "../header/dwarf.hpp"
#include "../src/dragonborn.cpp"
#include "../header/dragonborn.hpp"
#include "../src/character.cpp"
#include "../header/character.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;
//tests for Character set up 
vector<Character*> acharacters;

TEST(Charactertest, setup) {
    //vector<Character*> characters;
    acharacters.push_back(new Human(HUMAN, "Bob", "Knight", 100,10,10,10,10,5));
    acharacters.push_back(new Elf(ELF, "fob", "Archer", 80,13,6,12,11,5));
    acharacters.push_back(new Dragonborn(DRAGONBORN, "sob", "Wizard", 100,5,11,12,2,5));
    acharacters.push_back(new Dwarf(DWARF, "gob", "Assassin", 130,5,13,11,8,10));

    EXPECT_NO_THROW(acharacters[0]->setStats("Knight"));
    EXPECT_NO_THROW(acharacters[1]->setStats("Archer"));
    EXPECT_NO_THROW(acharacters[2]->setStats("Wizard"));
    EXPECT_NO_THROW(acharacters[3]->setStats("Assassin"));

}
TEST(Charactertest, set_get_health) {
    acharacters[0]->setHealth(1.5);
    acharacters[1]->setHealth(1.5);
    acharacters[2]->setHealth(1.5);
    acharacters[3]->setHealth(1.5);
    EXPECT_EQ(acharacters[0]->getHealth(), 180); //human, Kight 100+20*1.5
    EXPECT_EQ(acharacters[1]->getHealth(), 120); //elf, Archer 80 *1.5
    EXPECT_EQ(acharacters[2]->getHealth(), 135); //dragonborn, Wizard  100-10*1.5
    EXPECT_EQ(acharacters[3]->getHealth(), 165 ); //dwarf, Assassin 130-20* 1.5

 
}

TEST(Charactertest, sethealth150) {
    EXPECT_NO_THROW(acharacters[0]->setHealthTo150());
    EXPECT_NO_THROW(acharacters[1]->setHealthTo150());
    EXPECT_NO_THROW(acharacters[2]->setHealthTo150());
    EXPECT_NO_THROW(acharacters[3]->setHealthTo150());

    EXPECT_EQ(acharacters[0]->getHealth(), 150); //human, Kight 
    EXPECT_EQ(acharacters[1]->getHealth(), 150); //elf, Archer
    EXPECT_EQ(acharacters[2]->getHealth(), 150); //dragonborn, Wizard
    EXPECT_EQ(acharacters[3]->getHealth(), 150 ); //dwarf, Assassin
}

TEST(Charactertest, set_getstrength) {
    EXPECT_NO_THROW(acharacters[0]->setStrength(1.5));
    EXPECT_NO_THROW(acharacters[1]->setStrength(1.5));
    EXPECT_NO_THROW(acharacters[2]->setStrength(1.5));
    EXPECT_NO_THROW(acharacters[3]->setStrength(1.5));

    EXPECT_EQ(acharacters[0]->getStrength(), 18 ); //human, Kight = 10+2 *1.5
    EXPECT_EQ(acharacters[1]->getStrength(), 6); //elf, Archer= 6-2 *1.5
    EXPECT_DOUBLE_EQ (acharacters[2]->getStrength(), 13.5); //dragonborn, Wizard = 11-2 * 1.5
    EXPECT_DOUBLE_EQ(acharacters[3]->getStrength(), 22.5); //dwarf, Assassin = 13 + 2 * 1.5


}

TEST(Charactertest, set_getWisdom) {
    EXPECT_NO_THROW(acharacters[0]->setWisdom(1.5));
    EXPECT_NO_THROW(acharacters[1]->setWisdom(1.5));
    EXPECT_NO_THROW(acharacters[2]->setWisdom(1.5));
    EXPECT_NO_THROW(acharacters[3]->setWisdom(1.5));

    EXPECT_EQ(acharacters[0]->getWisdom(), 9); //human, Kight = 10-4 *1.5
    EXPECT_EQ(acharacters[1]->getWisdom(), 21); //elf, Archer= 12+2 *1.5
    EXPECT_DOUBLE_EQ (acharacters[2]->getWisdom(), 22.5); //dragonborn, Wizard = 12+3 * 1.5
    EXPECT_DOUBLE_EQ(acharacters[3]->getWisdom(), 13.5); //dwarf, Assassin = 11 - 2 * 1.5

}


TEST(Charactertest, set_getIntelligence) {
    EXPECT_NO_THROW(acharacters[0]->setIntelligence(1.5));
    EXPECT_NO_THROW(acharacters[1]->setIntelligence(1.5));
    EXPECT_NO_THROW(acharacters[2]->setIntelligence(1.5));
    EXPECT_NO_THROW(acharacters[3]->setIntelligence(1.5));


    EXPECT_DOUBLE_EQ(acharacters[0]->getIntelligence(), 16.5); //human, Kight = 10+1 *1.5
    EXPECT_EQ(acharacters[1]->getIntelligence(), 12); //elf, Archer= 11-3 *1.5
    EXPECT_DOUBLE_EQ (acharacters[2]->getIntelligence(), 7.5); //dragonborn, Wizard =  2+3* 1.5
    EXPECT_DOUBLE_EQ(acharacters[3]->getIntelligence(), 12); //dwarf, Assassin =  8* 1.5


}
TEST(Charactertest, getDex) {
    EXPECT_EQ(acharacters[0]->getDexterity(), 9); //10-1
    EXPECT_EQ(acharacters[1]->getDexterity(), 16);//13+3
    EXPECT_EQ(acharacters[2]->getDexterity(), 2); //5-3
    EXPECT_EQ(acharacters[3]->getDexterity(), 7); //5+2
}
TEST(Charactertest, getRace) {
    EXPECT_EQ(acharacters[0]->getRace(), HUMAN);
    EXPECT_EQ(acharacters[1]->getRace(), ELF);
    EXPECT_EQ(acharacters[2]->getRace(), DRAGONBORN);
    EXPECT_EQ(acharacters[3]->getRace(), DWARF);
}

TEST(Charactertest, getclass) {
    EXPECT_EQ(acharacters[0]->getClass(), "Knight");
    EXPECT_EQ(acharacters[1]->getClass(), "Archer");
    EXPECT_EQ(acharacters[2]->getClass(), "Wizard");
    EXPECT_EQ(acharacters[3]->getClass(), "Assassin");
}

TEST(Charactertest, getName) {
    EXPECT_EQ(acharacters[0]->getName(), "Bob");
    EXPECT_EQ(acharacters[1]->getName(), "fob");
    EXPECT_EQ(acharacters[2]->getName(), "sob");
    EXPECT_EQ(acharacters[3]->getName(), "gob");
}

TEST(Charactertest, getNumHealing) { // at this point no healing done therfore numhealthing = 5
    EXPECT_EQ(acharacters[0]->getNumHealing(), 5);
    EXPECT_EQ(acharacters[0]->getNumHealing(), 5);
    EXPECT_EQ(acharacters[0]->getNumHealing(), 5);
    EXPECT_EQ(acharacters[0]->getNumHealing(), 5);

}

// TEST(Charactertest, attack) {
//     EXPECT_NO_THROW(attack(*acharacters[0]));
//     EXPECT_NO_THROW(attack(*acharacters[1]));
//     EXPECT_NO_THROW(attack(*acharacters[2]));
//     EXPECT_NO_THROW(attack(*acharacters[3]));
// }

TEST(Charactertest, take_damage ) { // character takes damage 
    acharacters[0]->damage(10);
    acharacters[1]->damage(10);
    acharacters[2]->damage(150);
    acharacters[3]->damage(150);
    
    EXPECT_EQ(acharacters[0]->getHealth(), 140);
    EXPECT_EQ(acharacters[1]->getHealth(), 140);
    EXPECT_EQ(acharacters[2]->getHealth(), 0);
    EXPECT_EQ(acharacters[3]->getHealth(), 0);
}

TEST(Charactertest, isAlive) {  // at this point two false, critical damage has been done ^
    EXPECT_EQ(acharacters[0]->isAlive(), true);
    EXPECT_EQ(acharacters[1]->isAlive(), true);
    EXPECT_EQ(acharacters[2]->isAlive(), false);
    EXPECT_EQ(acharacters[3]->isAlive(), false);
}
// character will use all healling items, try agian and return cout << "No healing items left" << endl


TEST(Charactertest, heal) {
    EXPECT_NO_THROW(acharacters[3]->heal());
    EXPECT_NO_THROW(acharacters[3]->heal());
    EXPECT_NO_THROW(acharacters[3]->heal());
    EXPECT_NO_THROW(acharacters[3]->heal());
    EXPECT_NO_THROW(acharacters[3]->heal());
}


TEST(enemy_test, enemy_maxHealth ) {// ensures enemy's max health is correct
    acharacters.push_back(new Enemy(ENEMY, "Goblin", 80, 80));
    acharacters.push_back(new Enemy(ENEMY, "Wolf", 120,120));
    acharacters.push_back(new Enemy(ENEMY, "Melovlent Spider", 170,170));
    acharacters.push_back(new Enemy(ENEMY, "Falkor", 250,250));
    
    EXPECT_EQ(acharacters[4]->getMaxHealth(), 80);
    EXPECT_EQ(acharacters[5]->getMaxHealth(), 120);
    EXPECT_EQ(acharacters[6]->getMaxHealth(), 170);
    EXPECT_EQ(acharacters[7]->getMaxHealth(), 250);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
