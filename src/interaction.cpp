#include <iostream>
#include "../header/interaction.hpp"

void Interaction::gameplay(){
    
    int seed;
	cout << "Enter seed value: ";
	cin >> seed;
	cout << endl;
	
	srand(seed);

    vector<Enemy *> enemies;
    enemies.push_back(new Enemy("Goblin",100,0,100)); //attack at zero since we only counter attacking of misses
    enemies.push_back(new Enemy("Wolf",150,0,150));
    enemies.push_back(new Enemy("Melovlent Spider",200,0,200));
    enemies.push_back(new Enemy("Falkor",250,0,250));
    string race;
    string name;
    string race;
    cout << "Choose your race: Human, Elf, Dragonoid, Dwarf" << endl;
    cin >> myClass;
    cout << "Choose your class: Knight, Archer, Wizard, Assasian" << endl;
    cin >> myClass;
    "What will be your name?"
    cin >> name;
    if(race == "Human" || race == "human"){
        Character player = new Character(HUMAN,name,100,10,10,10,10,10); //dexterity, strength, wisdom, is useless
    }
    if(race == "Elf" || race == "elf"){
        Charecter player = new Character(ELF,name,100,10,10,10,10,10);
    }
    if(race == "Dragonoid" || race == "dragonoid"){
        Character player = new Character(DRAGANOID,name,100,10,10,10,10,10);
    }
    if(race == "Dwarf" || race == "dwarf"){
        Character player = new Character(DWARF,name,100,10,10,10,10,10);
    }
    cout << "You have spawned in Windsor Castle, gear up " name " and prepare to travel the plains in search for glory" << endl;
    cout << "You are traveling the plains and see a suspicious figure following you, he is hooded and you cannot tell his race" << endl;
    cout << "You hear footsteps behind you and instinctively turn around to dodge his dagger attack!" << endl;
    cout << "It's a goblin! Goblins always tend to prey on travelers, prepare for battle!" << endl;
    string choice1;
    cout << "Will you attack or flee" << endl;
    cin >> choice1;
    if(choice1=="Attack" || chocie1 == "attack"){
        while(player.isAlive()){
            while(enimies[1].isAlive()){
                //attck
                if(//attack <= enemies1Hp/5){
                    //enemies.1hp =
                )
                }
            }
        }
    }
