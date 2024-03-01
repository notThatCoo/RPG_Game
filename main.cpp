#include <iostream>

using namespace std;

int main() {

    cout << "Fantasy RPG \n" << endl;

    int typeOfGame = 0;
    int startGame = 0;

    cout << "New game (1)" << endl << "or" << endl << "About the game (2)" << endl;

    cin >> typeOfGame;

    if (cin.fail()) { throw runtime_error("Invalid input"); }

    if (typeOfGame == 1) {

        //Create new game

    }
    else if (typeOfGame == 2)    { 

        cout << "About the Game \n" << endl;
        cout << "Pick a race and class" << endl;
        cout << "They will dictate your stats" << endl;
        cout << "Increasing specific stats makes you stronger" << endl;
        cout << "In this game you will go on a journey" << endl;
        cout << "You will fight many foes and eventually make it to the boss" << endl;
        cout << "Along the way you will get stronger" << endl;
        cout << "Hopefully you can slay your enemies \n" << endl;

        cout << "Do you wish to play the game?" << endl;
        cout << "Yes (1)" << endl << "or" << endl << "No (2)" << endl;

        cin >> startGame;

        if (cin.fail()) { throw runtime_error("Invalid input"); }

        if (startGame == 1) { //Create a new game 
        }
        else if (startGame == 2) { return 1; }

        else { throw runtime_error("Invalid input"); }

    }
    else { throw runtime_error("Invalid input"); }









    return 1;
}
