#include <iostream>
#include <string>
#include <vector>
#include "../header/character.hpp"
#include "../header/human.hpp"
#include "../header/dwarf.hpp"
#include "../header/elf.hpp"
#include "../header/dragonborn.hpp"
#include "../header/enemy.hpp"
#include "../header/interaction.hpp"

void Interaction::gameplay(){
    int seed;
	cout << "Enter seed value: ";
	cin >> seed;
	cout << endl;
	
	srand(seed);

    vector<Character*> characters;
    
    int myClassInt;
    int myRace;
    string name;
    string myClass;
    
    restart:

    cout << "Choose your race: Human (1), Elf(2), Dragonoid(3), Dwarf(4)" << endl;
    cin >> myRace;
    cout << "Choose your class: Knight(1), Archer(2), Wizard(3), Assassin(4)" << endl;
    cin >> myClassInt;
    cout << "What will be your name?" << endl;
    cin >> name;

    if (myClassInt == 1) { myClass = "Knight"; }
    else if (myClassInt == 2) { myClass = "Archer"; }
    else if (myClassInt == 3) { myClass = "Wizard"; }
    else if (myClassInt == 4) { myClass = "Assassin"; }
    
    if(myRace == 1){
        characters.push_back(new Human(HUMAN, name, myClass, 100,10,10,10,10,5));
    }
    else if(myRace == 2){
        characters.push_back(new Elf(ELF, name, myClass, 100,10,10,10,10,10));
    }
    else if(myRace == 3){
        characters.push_back(new Dragonborn(DRAGONBORN, name, myClass, 100,10,10,10,10,10));
    }
    else if(myRace == 4){
       characters.push_back(new Dwarf(DWARF, name, myClass, 100,10,10,10,10,10));
    }
    else { throw runtime_error("Incorrect input"); }

    characters.push_back(new Enemy("Goblin",80,0,100));
    characters.push_back(new Enemy("Wolf",120,0,150));
    characters.push_back(new Enemy("Melovlent Spider",170,0,200));
    characters.push_back(new Enemy("Falkor",200,0,250));

    cout << "You have spawned in Windsor Castle, gear up " << name << " and prepare to travel the plains in search for glory" << endl;
    cout << "You are traveling the plains and see a suspicious figure following you, he is hooded and you cannot tell his race" << endl;
    cout << "You hear footsteps behind you and instinctively turn around to dodge his dagger attack!" << endl;
    cout << "It's a goblin! Goblins always tend to prey on travelers, prepare for battle!" << endl;
    int choice;

    while(characters[0]->isAlive() && characters[1]->isAlive()){
        cout << "Will you attack (1), heal (2) or flee(3)" << endl;
   		cin >> choice;
        if(choice == 1){
            double damage = attack(*characters[0]);
            if(damage <= (characters[1]->getHealth()/5)){
                cout << "Your attack was ass! The goblin dodged your attack and slashed you!" << endl;
                characters[0]->damage(damage);
                cout << "Your HP is " << characters[0]->getHealth() << endl;
            }
            else{
                cout << "Good shit! You just hit the goblin for " << damage << "HP!" << endl;
                characters[1]->damage(damage);
            }
        }
        if(choice == 2){
            characters[0]->heal();
            cout << "Your HP is " << characters[0]->getHealth() << endl;
        }
        if(choice == 3){
            if(myRace == 1){
                characters[0]->setHealth(100); //NEED A SET HEALTH FUNCION!!!!!!
            }
            cout << "You ran off from the goblin across the plains" << endl;
            break;
        }
    }
    if(characters[0]->isAlive() == false){
        cout << "The goblin has slained you pathethic mortal, YOU DIED" << endl;
        characters.clear();
        goto restart;
    }
    if(characters[1]->isAlive() == false){
        cout << "The goblin has been slain, you walk over his body and notice he has dropped a shard" << endl;
        cout << "The shard can be used to level up strength(1) or health(2), what will you choose" << endl;
        cin >> choice;

        if(choice == 1){
        characters[0]->setStrength(1.5); //NEED A SET STRENGTH FUNCTION!!!!! 1.5 is the multiplier
        }
        if(choice == 2){
            characters[0]->setHealth(1.5); //NEED A SET HEALTH FUNCTION!!!!! 1.5 is the multiplier
        }
    }

    //2nd BOSS

    cout << "After crossing the plains yo enter Zelda's Woods and continue your journey" << endl;
    cout << "You stumble across and abonded shack and sleep for the night" << endl;
    cout << "In the middle of the night you are woken by a growl" << endl;
    cout << "You grab your weaponry and check the woods, and see glowing eyes in the treeline" << endl;
    cout << "Its a wolf! It charges at you full speed and attempts to bite you" << endl;
    cout << "You dodge and the battle is on!" << endl;

    while(characters[0]->isAlive() && characters[2]->isAlive()){
        cout << "Will you attack (1), heal (2) or flee(3)" << endl;
   		cin >> choice;
        if(choice == 1){
            double damage = attack(*characters[0]);
            if(damage <= (characters[2]->getHealth()/5)){
                cout << "Your attack was ass! The Wolf dodged your attack and bit you!" << endl;
                characters[0]->damage(damage);
                cout << "Your HP is " << characters[0]->getHealth() << endl;
            }
            else{
                cout << "Good shit! You just hit the Wolf for " << damage << "HP!" << endl;
                characters[2]->damage(damage);
            }
        }
        if(choice == 2){
            characters[0]->heal();
            cout << "Your HP is " << characters[0]->getHealth() << endl;
        }
        if(choice == 3){
            if(myRace == 1){
                characters[0]->setHealth(100); //NEED A SET HEALTH FUNCION!!!!!!
            }
            cout << "You ran back into the hut and shut the door" << endl;
            break;
        }
    }
    if(characters[0]->isAlive() == false){
        cout << "The Wolf pounced on top of you and mauled your head off, YOU DIED" << endl;
        characters.clear();
        goto restart;
    }
    if(characters[2]->isAlive() == false){
        cout << "The Wolf has been slain, you walk over its body and notice the wolf dropped a gold plated tooth" << endl;
        cout << "The tooth can be used to level up wisdom(1) or health(2), what will you choose" << endl;
        cin >> choice;

        if(choice == 1){
        characters[0]->setWisdom(1.5); //NEED A SET WISDOM FUNCTION!!!!! 1.5 is the multiplier
        }
        if(choice == 2){
            characters[0]->setHealth(1.5); //NEED A SET HEALTH FUNCTION!!!!! 1.5 is the multiplier
        }
    }

    //3rd boss

    cout << "You wake up from the hut and continue your jounry now corssing the dark everlands" << endl;
    cout << "Many have fallen in these lands so you begin to sweat as you continue your journey" << endl;
    cout << "Anxious you trip over and land on your face as you begin to panic" << endl;
    cout << "You realize its just a branch so you turn around and lay on your back" << endl;
    cout << "In that moment you see spider 20 feet tall in the tree" << endl;
    cout << "It scurrys down and is preparing to taack you!" << endl;

    while(characters[0]->isAlive() && characters[3]->isAlive()){
        cout << "Will you attack (1), heal (2) or flee(3)" << endl;
   		cin >> choice;
        if(choice == 1){
            double damage = attack(*characters[0]);
            if(damage <= (characters[3]->getHealth()/5)){
                cout << "Your attack was ass! The spider dodged your attack and hit you with its leg!" << endl;
                characters[0]->damage(damage);
                cout << "Your HP is " << characters[0]->getHealth() << endl;
            }
            else{
                cout << "Good shit! You just hit the spider for " << damage << "HP!" << endl;
                characters[3]->damage(damage);
            }
        }
        if(choice == 2){
            characters[0]->heal();
            cout << "Your HP is " << characters[0]->getHealth() << endl;
        }
        if(choice == 3){
            if(myRace == 1){
                characters[0]->setHealth(100); //NEED A SET HEALTH FUNCION!!!!!!
            }
            cout << "You ran off from the spider barely makingit out by running into a nearby cave" << endl;
            break;
        }
    }
    if(characters[0]->isAlive() == false){
        cout << "The grabbed you by its leg and wrapped you up before devouring you, YOU DIED" << endl;
        characters.clear();
        goto restart;
    }
    if(characters[3]->isAlive() == false){
        cout << "The Spider has been slain, you walk over its body and notice the spider dropped Heros venom" << endl;
        cout << "Heros venom can be used to level up intellegnce(1) or health(2), what will you choose" << endl;
        cin >> choice;

        if(choice == 1){
        characters[0]->setIntellegence(1.5); //NEED A SET intellegence FUNCTION!!!!! 1.5 is the multiplier
        }
        if(choice == 2){
            characters[0]->setHealth(1.5); //NEED A SET HEALTH FUNCTION!!!!! 1.5 is the multiplier
        }
    }

    //final boss
    
    cout << "After a while you leave the dark everlands and reach the lava lands" << endl;
    cout << "The Journey is hot and not for the wek but you made it this far!" << endl;
    cout << "You continue untl you see an abonded castle!" << endl;
    cout << "You walk in and see death everywhere as warriors before you lay rot in the ground" << endl;
    cout << "As you journey the castle you hear humming coming from the stairs, you follow the sound" << endl;
    cout << "As you get closer and closer you start to consider if you will end up dead like the rest" << endl;
    cout << "You apporach the room where the sound is coming from and in a moment of fear slam the door down and scream" << endl;
    cout << "Before you stands a princess in awe, it could be you or the fact that your pants fell off while barging in" << endl;
    cout << "You pull your pants up and greet the princess prompting to saveher from this castle" << endl;
    cout << "In that moment a Dragon tears the roof of your building! You leap to the princess to cover her form the rubble" << endl;
    cout << "The dragon roars in power and you uncover yourself from the rubble, there is no fleeing now" << endl;
    while(characters[0]->isAlive() && characters[4]->isAlive()){
        cout << "Will you attack (1) or heal (2)" << endl;
   		cin >> choice;
        if(choice == 1){
            double damage = attack(*characters[0]);
            if(damage <= (characters[4]->getHealth()/5)){
                cout << "Your attack was ass! The dragon burned you!" << endl;
                characters[0]->damage(damage);
                cout << "Your HP is " << characters[0]->getHealth() << endl;
            }
            else{
                cout << "Good shit! You just hit the dragon for " << damage << "HP!" << endl;
                characters[4]->damage(damage);
            }
        }
        if(choice == 2){
            characters[0]->heal();
            cout << "Your HP is " << characters[0]->getHealth() << endl;
        }
    }
    if(characters[0]->isAlive() == false){
        cout << "You look back at the princess one last time and say goodbye" << endl;
        cout << "You then take final charge at the dragon but he grabs you by the tail and throws you past the horozion, YOU DIED" << endl;
        characters.clear();
        goto restart;
    }
    if(characters[4]->isAlive() == false){
        cout << "In a moment of desperation you use DOMAIN EXPANSION and killed the dragon" << endl;
        cout << "The dragon has been slain and as it falls from the sky you turn around James Bond smile and smooch the princess" << endl;
        cout << "You take her out the lava lands and live hapily ever after" << endl;
    }

}
    


