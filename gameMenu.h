#ifndef GAMEMENU_H
#define GAMEMENU_H
#include <string>

using namespace std;

class gameMenu
{
	private: 
		string playerName;
	public: 
		gameMenu();
		void getPlayerName();
		void displayRule();
		void dispWelcomeMessage();
		void clearOutput();
		int displayScore(int& score);
		string getPlayerName() const;
};

#endif
