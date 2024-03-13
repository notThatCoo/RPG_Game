#include <iostream>
#include "../header/dragonborn.hpp"
#include "../header/character.hpp"

using namespace std;

int main() {

    Dragonborn Man1("Jon", "Knight", 100, 10.0, 10.0, 10.0, 10.0, 10);

    Man1.setStats(Man1.getClass());

    Man1.flee();

    return 0;
}