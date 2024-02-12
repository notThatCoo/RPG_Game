#include <iostream>

using namespace std;

int main() {

    cout << "Fantasy RPG \n" << endl;

    int typeOfGame = 0;

    cout << "New game (1)" << endl << "or" << endl << "Saved game (2)" << endl;

    cin >> typeOfGame;

    if (cin.fail()) { throw runtime_error("Invalid input"); }

    if (typeOfGame = 1) {

        //Create new game

    }
    else if (typeOfGame = 2)    { 

        //Go into saved game

    }
    else { throw runtime_error("Invalid input"); }









    return 1;
}
