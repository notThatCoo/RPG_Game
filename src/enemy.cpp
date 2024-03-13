#include "../header/enemy.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Enemy::Enemy(const string& name, double health, int attackStrength, double maxHealth)
    : Character(ENEMY, name, health, attackStrength, maxHealth) {}

double Character::attack(Character &player) { //NEEDS PROPER CONNECTION!

    double damage = rand() % (getAttackStrength(player) + 1);

    return damage;
}