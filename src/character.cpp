#include <iostream>
#include "Character.h"
using namespace std;

    
Character::Character(HeroRace Race, const string &name, double health, double speed, double dexterity, double strength, double wisdom, double intelligence)
: type(type), name(name), health(health), dexterity(dexterity), strength(strength), wisdom(wisdom), intelligence(intelligence) {}

void setStats(string c){
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
HeroRace Character::getReace(){
    return Race; 

}
string Character::getStats(){
    

}
void damage(double d){

}
void attack(character& ){

}
bool isAlive(){
    if(health < 1){
        return false;
    }
    else{
        return true;
    }

}