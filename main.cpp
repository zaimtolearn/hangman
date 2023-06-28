#include "gameMenu.h"
#include "genWord.h"
#include "charList.h"
#include "hangMan.h"
#include <iostream>
#include <fstream>

using namespace std;

void saveScore(int round){
	ofstream myfile;
	int tempScore = 30*round;
	myfile.open("scores.txt", ofstream::app);
	myfile << tempScore << endl;
	myfile.close();
}

void readScore(){
	ifstream file;
	
	file.open("scores.txt");
	if(file.fail()){
		cout << "Error reading score file! Sorry..." << endl;
	}
	else{
		int score =0;
		int max = 0;
		bool firstNum = true;
		
		while(file >> score){
			if(firstNum){
				max = score;
				firstNum = false;
			}
			else if(score > max){
				max = score;
			}
		}
		
		if(firstNum) cout << "No scores in the file" << endl;
		else cout << "Highest Score is " << max << endl;
	}
	file.close();
}

void playGame(int& round) {
    // Listed Object
    genWord obj1;
    charList obj2;
    hangMan obj3;
    
    // Variable Declarations
    string word1;
    char guess;
    bool correctGuess;
    int incorrectGuessCount = 0;
    const int maxIncorrectGuesses = 7;
    
    // Getting the random Word and appending the word into the Linked Lists
    cout << "Guess the Word! Good Luck!" << endl;
    obj3.pushHangMan();
    word1=obj1.randomWord();
    cout << "Round: " << round++ << endl;
    //obj1.printWord(); ////////////////// remove later
    for(int i=0; i<word1.length(); i++) obj2.appendNode(word1.at(i));
    
    // Live Game code
    while(!obj2.isRevealed() && incorrectGuessCount < maxIncorrectGuesses){
        obj2.displayList();
        cout << "\nEnter guess: ";
        cin >> guess;
        correctGuess = obj2.isCorrect(guess);
        if (!correctGuess) {
            cout << endl;
            obj3.displayHangman();
            cout << endl;
            incorrectGuessCount++;
        }
    }
    
    // Show answer
    obj2.displayList(); 
    obj3.clearStack();
    
    // Show win || lose situations
    if (incorrectGuessCount == maxIncorrectGuesses) {
    	saveScore(round);
		round = 0;
        cout << "\nYou lost! The word was: " << word1 << endl;
    } else {
        cout << "\nCongratulations! You guessed the word." << endl;
    }
}

int main(){
    // Listed Object
    gameMenu game;
    
    // Variable Declarations
    int options; 
    char choice;
    int round = 0;
    int score = 0; 
    
    do {
        // Program asks for Player Name.
        game.getPlayerName();
        game.clearOutput();
        
        // Program displays Main Menu and asks for options.
        game.dispWelcomeMessage();
        cin >> options;
        
        while (options == 1 || options == 2 || options == 3 || options == 4 || options ==5 ) 
        {
        	// Start a new game
            if (options == 1)
            {
            	game.clearOutput();
                playGame(round);
                
                // Ask if want to start a new game 
                cout << "\nDo you want to start a new game? " << endl; 
                cout << "Enter 'y' or 'Y' if yes & 'n' or 'N' if no." << endl;
                cin >> choice;
                
                while(choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){
                    cin >> choice;
                }
                
                if(choice == 'n' || choice == 'N'){
                    // Update score;
                    break;
                }
                else if (choice == 'y' || choice == 'Y') {
                    game.clearOutput();
                }
            }
            
            // Load Game
            else if (options == 2)
            {
                game.clearOutput();
                playGame(round);
                
                // Ask if want to start a new game 
                cout << "\nDo you want to start a new game? " << endl; 
                cout << "Enter 'y' or 'Y' if yes & 'n' or 'N' if no." << endl;
                cin >> choice;
                while(choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){
                    cin >> choice;
                }
                
                if(choice == 'n' || choice == 'N'){
                    // Update score;
                    break;
                }
                else if (choice == 'y' || choice == 'Y') {
                    game.clearOutput();
                }
            }
            
            // Display Rules
            else if (options == 3)
            {
                game.clearOutput(); 
                game.displayRule();
                system("pause");
                game.clearOutput();
                game.dispWelcomeMessage();
                cin >> options;
            }
            
            // Display High Score
            else if (options == 4)
            {
            	game.clearOutput();
            	score = 30*round; 
            	game.displayScore(score);
            	readScore();
            	system("pause");
            	game.clearOutput();
            	game.dispWelcomeMessage();
            	cin >> options;
			}
			
			else if (options == 5)
			{
				saveScore(round);
				return 0;
			}
        }
    } while (true);

    return 0;
}
