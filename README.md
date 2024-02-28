
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
![CS100 final project](https://github.com/cs100/final-project-lguzm044_schav088_tadel002_habdu016/assets/156245649/3d156cca-8f1f-4e43-9b68-a78160826cc4)

## Class Diagram

![RPG_Class-Page-1 drawio](https://github.com/cs100/final-project-lguzm044_schav088_tadel002_habdu016/assets/156245649/9550da07-d94b-4de7-a71d-970f8e41c7e4)



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
>+attack():void
	character attacks Attack  
>+isAlive(): bool
	Returnings false if health is less than 1 and true otherwise, 

>Human/Dwarf/Dragonborn/Elf Class:

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
>Opponent Class
>set_attackstrength and set_hitpoint will pass in user's level and determine difficulty of opponent
>Interaction class
>+sei_initiative determines who goes first
>end_turn() will keep track of who's turn it currently is
>won(character& ) will perform end of battle actions

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
