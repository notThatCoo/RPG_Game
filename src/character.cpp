#include <iostream>
#include "../header/character.hpp"
using namespace std;

    
Character::Character(Race HeroRace, const string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence)
: HeroRace(HeroRace), name(name), health(health), dexterity(dexterity), strength(strength), wisdom(wisdom), intelligence(intelligence) {}

void Character::setStats(string c){
    if (c == "Knight"|| c== "knight"){
        health += 2;
        dexterity -= 1;
        strength += 2;
        wisdom -= 4;
        intelligence +=1;
    }
    if(c== "Archer"|| c== "archer"){
        speed += 2;
        dexterity += 1;
        strength -= 2;
        wisdom += 2;
        intelligence -=3;
    }
    if(c== "Wizard" || c== "wizard"){
        health -= 1;
        speed -= 1;
        dexterity -= 2;
        strength -= 2;
        wisdom += 3;
        intelligence +=3;
    }

}
Race Character::getRace(){
    return HeroRace; 

}
string Character::getStats(){
    

}
void Character::damage(double d){

}
void Character::attack(Character&){

}
bool Character::isAlive(){
    if(health < 1){
        return false;
    }
    else{
        return true;
    }

}