#include "../header/enemy.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Enemy::Enemy(const string& name, double health, int attackStrength)
    : Character(ENEMY, name, health, attackStrength) {}

void Enemy::attack(Character &opp) {

    double damage = rand() % (attackStrength + 1); 

}