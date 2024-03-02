#include <iostream>
#include <string>
#include "../header/interaction.hpp"

void Interaction::gameplay(){
    
    int seed;
	cout << "Enter seed value: ";
	cin >> seed;
	cout << endl;
	
	srand(seed);

    vector<Characters *> characters;
    
    int myClass;
    int myRace;
    string name;

    cout << "Choose your race: Human (1), Elf(2), Dragonoid(3), Dwarf(4)" << endl;
    cin >> myRace;
    cout << "Choose your class: Knight(1), Archer(2), Wizard(3), Assassin(4)" << endl;
    cin >> myClass;
    "What will be your name?"
    cin >> name;
    
    if(myRace == 1){
        characters.push_back(new HUMAN(name,100,10,10,10,10,10)); //dexterity, strength, wisdom, is useless
    }
    else if(myRace == 2){
        characters.push_back(new ELF(name,100,10,10,10,10,10));
    }
    else if(myRace == 3){
        characters.push_back(new DRAGONOID(name,100,10,10,10,10,10));
    }
    else if(myRace == 4){
       characters.push_back(new DWARF(name,100,10,10,10,10,10));
    }
    else { throw runtime_error("Incorrect input"); }

    characters.push_back(new Enemy("Goblin",100,0,100)); //attack at zero since we only counter attacking of misses
    characters.push_back(new Enemy("Wolf",150,0,150));
    characters.push_back(new Enemy("Melovlent Spider",200,0,200));
    characters.push_back(new Enemy("Falkor",250,0,250));

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
