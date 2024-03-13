#include "../header/enemy.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Enemy::Enemy(const string& name, double health, int attackStrength, double maxHealth)
    : Character(ENEMY, name, health, attackStrength, maxHealth) {}
