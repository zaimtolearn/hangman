#include "gameMenu.h"
#include <iostream>
#include <string>

using namespace std; 

gameMenu::gameMenu() {
        playerName = "";
    }
    
void gameMenu::getPlayerName() {
        cout << "Enter your name: ";
        getline(cin, playerName);
    }

void gameMenu::dispWelcomeMessage() {
	cout << "88        88                                        88b           d88                           " << endl;
	cout << "88        88                                        888b         d888                           " << endl;
	cout << "88        88                                        88`8b       d8'88                           " << endl;
	cout << "88aaaaaaaa88  ,adPPYYba,  8b,dPPYba,    ,adPPYb,d8  88 `8b     d8' 88  ,adPPYYba,  8b,dPPYba,   " << endl;
	cout << "88********88  *      `Y8  88P'    `8a  a8     `Y88  88  `8b   d8'  88  *      `Y8  88P'   `*8a  " << endl;
	cout << "88        88  ,adPPPPP88  88       88  8b       88  88   `8b d8'   88  ,adPPPPP88  88       88  " << endl;
	cout << "88        88  88,    ,88  88       88  *8a,   ,d88  88    `888'    88  88,    ,88  88       88  " << endl;
	cout << "88        88  `*8bbdP*Y8  88       88   `*YbbdP*Y8  88     `8'     88  `*8bbdP*Y8  88       88  " << endl;
	cout << "                                        aa,    ,88                                              " << endl;
	cout << "                                          Y8bbdP                                                " << endl;
	
		cout << "***************************************************************************************" << endl;
        cout << "*	                    Welcome to HangMan - The Arcade, " << playerName << "!" << "                    *" <<endl;
        cout << "*	                             1. Start New Game                                *" << endl;
        cout << "*	                             2. Load Game                                     *" << endl;
        cout << "*                             	     3. Show Rules                                    *" << endl;
        cout << "*                                    4. Display Highscore                             *" << endl;
        cout << "*                                    5. Exit Game                                     *" << endl;
        cout << "***************************************************************************************" << endl;
        cout << "Enter your options: " ;
        
	}
    
string gameMenu::getPlayerName() const {
        return playerName;
    }
    
void gameMenu::displayRule(){
	cout << "Please follow the rules of the game listed below:" << endl; 
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "|1. Try to guess the word by entering one letter at a time.                |" << endl;
    cout << "|2. You have a maximum of 7 incorrect guesses.                             |" << endl;
    cout << "|3. If you exit or lose the game, your score will be saved in a file.      |" << endl;
    cout << "|4. If you are a new player, terminate the program, and start new.         |" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
}

void gameMenu::clearOutput(){
	system("CLS");
}

int gameMenu::displayScore(int& score)
{
	cout << "Your most recent score is: " << score << endl;
	return 0;
}

