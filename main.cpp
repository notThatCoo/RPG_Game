#include <iostream>
#include "src/character.cpp"
using namespace std;

int main() {
    Race HeroRace = HUMAN;
    const string &name = "Burt";

    Character *aCharacter = new Character(HeroRace, name,10, 10, 10, 10, 10, 10);
    // picking character class
    string c = "Knight";
    aCharacter->setStats(c);
    cout << "Race: " <<aCharacter->getRace() << endl;
    cout << "Name: " << aCharacter->getName() << endl;

    cout << "Health: " << aCharacter->getHealth() << endl;
    cout << "Take 2 damage: ";
    aCharacter->damage(2);
    cout << "Health: " << aCharacter->getHealth() << endl;
    cout << "Healing " << endl;
    aCharacter->heal();
    cout << "Health: " << aCharacter->getHealth() << endl;
    if(aCharacter->isAlive()){ 
        cout << "alive";
        }
    
    return 0;
}

