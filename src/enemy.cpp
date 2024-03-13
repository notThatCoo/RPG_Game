#include "../header/enemy.hpp"

using namespace std;

Enemy::Enemy(Race HeroRace, const string &name, double health, double maxHealth)
    : Character(ENEMY, name, health, maxHealth) {}