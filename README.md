
# CS100 Project: RPG
 
 > Authors: Leonardo Guzman ([@TregisD](https://github.com/TregisD)), Tolulope Adeleye ([@notThatCoo](https://github.com/notThatCoo)), Sophia Chavez([@sophia-a-chavez](https://github.com/sophia-a-chavez)), Hishaam Abdul-Muhaimin([@Hishaamx2](https://github.com/Hishaamx2))

## Project Description
 > * Games have always been a passion of mine.  I've also played my fair share of RPGs, and creating one seems fun.
 > * We plan to use C++.
 > # Input
 > The first instance of input and output is creating a game.  You can either pick a new game or a saved game.  Next is the character creation.  You'll input the race and class of the character you want.  The game will then output what's happening, including your level, the health of yourself and the enemy, and more when prompted.
 > # Features
 > There will be two options when creating a character: Race and Class.  Each option has four suboptions (16 total combinations).  Both race and class have different benefits depending on the desired play style (for example, being a tank or swift damage dealer).  Initially, the user will be shown the four races and be prompted to choose one.  After they choose one, they will be prompted to choose a class.  Once they do both, the first stage is open.  Next comes the actual gameplay.  Our RPG will have turn-based gameplay and level progression.  During combat, the user will be prompted to perform one of many actions, such as attack, flee, heal, and check inventory.  There will be a grace period between every level where one can heal, look at their inventory, and "prepare" for the next level.  Also, after every level, the user will be given a random weapon or armor that improves their stats and one stat allocation point.  Said random weapon/armor will have increased benefits as one progresses through the game.  For non-stale gameplay, as well as adding an element of luck and strategy, attacks will damage in a set range.  Stats, weapons, and even armor can increase the maximum and/or minimum damage possible.  There won't be an ending to our game.  As you progress through the levels, you and your enemies will both get stronger.  Both strategy and luck will play a big part in progressing.  The goal of the game is to see how far you can get while trying out all the race and class combinations and seeing which one you like more.   


### Navigation Diagram

![jdksbck (1)](https://github.com/cs100/final-project-lguzm044_schav088_tadel002_habdu016/assets/156245649/09044320-e759-43c9-bf20-34bf9842d2a1)

>Navigation Diagram Description
>For each iteration of “Arrived at opponent” the opponent will change and increase in difficulty. From iteration 0 to 3 the opponents will be goblin, wolf, giant snake and malevolent spider. On the 4th iteration the opponent is a dragon, this is the final boss and after successfully defeating the dragon the user beats the game.


## Class Diagram

![RPG_Class-Page-1](https://github.com/cs100/final-project-lguzm044_schav088_tadel002_habdu016/assets/156245649/f16882d4-bd5b-465a-82c8-1709567bf8c2)

Class Diagram Description:
>Character class:

>+Character(Hero Race, Hero Class, const string &, double ,double,double,double)
	Creates character,
>+HeroRace set stats(string c): void
Takes in character Hero Race’s and class corresponding stats and computes 
	Total character stats,
>+get stats(): string 
	Out put character’s name, current stats and level
>+damage(double d):void
	Compute health after taking damage, 
>+attack():void character attacks Attack  

>Human/Dwarf/Dragonborn/Elf Class:
>getRace():HeroRace
	returns a hero's race
>+isAlive(): bool
	Returnings false if health is less than 1 and true otherwise
>Human/Dwarf/Dragonborn/Elf Class:

<RaceName>(Race, const string&, const string&, double, double,
double, double, double, int)
constructs a race class

>+attackstrength(double, double, double,double): double
takes in character's stats and computes total damage character will inflict when attacking,
>+attack(character& ): void
	Player attacks character passed in, 
>+flee(): void
	Character can attempt to flee a fight when it is their turn
	Computes if character successfully flees a fight and flees if yes,
>+checkinventory(): void
	Outputs the contents of inventory, gives the user an option to equip item, and will change the character stats accordingly to item abilities, 
 >+Level(double l): double
 	update character stats with corresponding level, return level
>
>
>Opponent Class
>
>+set_attackstrength and +set_hitpoint will pass in user's level and determine difficulty of opponent
>+isAlive():bool
	returns if the opponent is alive
>+damage(double d):void
  
>Interaction class
>
>+sei_initiative determines who goes first
>end_turn() will keep track of who's turn it currently is
>won(character& ) will perform end of battle actions

 
 > ## SOLID principles in Class Diagram
> The majority of the changes made to our class diagram were to satisfy the Single-responsibility principle, In both our character and race classes we had functions that would calculate a new stat and output the changes. We split up jobs into simpler functions that perform singular jobs. We also made sure our ISP was correct. Classes do not implement methods they don't use. The other change we made to satisfy the SOLID principles is adding the enemy class, without adding that class we would have to modify the character class in order to create an enemy, this satisfies the Open-Closed Principle. 
> 


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > file:///C:/Users/PC/Downloads/More_inputs_&_outputs.pdf
> This is the initial output and the subsequent output if you continue to choose option 1, done by pressing 1 on your keyboard, to: start the game, choose a character of race human and class knight. As you can see, there is another output that asks you to enter your name. This takes a string input. Finally in this screenshot, there is an option to either attack, heal, or flee when faced with an enemy. If you choose to heal, your health goes up. Fleeing ends the encounter and takes you to the next enemy. 
 ## Installation/Usage
 
 > Instructions on installing and running your application
> All necessary files for this application are split amongst the src folder, header folder, and CmakeList.txt file. The src and header folders contain files that make the interface of the game possible. The CMakeLists text file contain the executable to start the game. To run the game you need a working terminal that is compatible with C++ functionality. 

 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
>We used google test to test our project. We started by testing the constructors for the character class and the subclasses, ensuring the variables have the correct values. Next we tested the functions of these classes that alter the value of these variables using asserts to ensure they are being updated correctly. 
 
