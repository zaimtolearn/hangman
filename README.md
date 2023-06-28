# HangMan
HangMan - The Arcade
### Table of Contents
* [What is this?](https://github.com/zaimtolearn/hangman/blob/main/README.md#what-is-this)
* [Features of the game.](https://github.com/zaimtolearn/hangman/blob/main/README.md#features-of-the-game)
* [How to play the game.](https://github.com/zaimtolearn/hangman/blob/main/README.md#how-to-play-hangman---the-arcade)
* [How object-oriented concepts were used to develop our game.](https://github.com/zaimtolearn/hangman/blob/main/README.md#how-object-oriented-concepts-were-used-to-develop-our-game)
* [How linked lists/stacks play a role in our game.](https://github.com/zaimtolearn/hangman/blob/main/README.md#how-linked-listsstacks-play-a-role-in-our-game)
* [Screenshots of our game.](https://github.com/zaimtolearn/hangman/blob/main/README.md#screenshots-of-our-game)
* [Game demo video](https://github.com/zaimtolearn/hangman/blob/main/README.md#game-demo-video)

### What is this?
This hangman is an open-source re-implementation of our classic childhood game, hangman, as its name suggests. It is intended to be used as a game similar to arcade games, where you can compete with other players with your high scores. This project uses no coding from any sources and is in fully C++. Instead, everything is re-implemented from scratch.

### Features of the game
* HangMan - The Arcade is capable of storing your highest score.
* It uses common and flexible libraries such as iostream, fstream, ctime and cstdlib.
* It is cross-compatible with most C++ IDEs.
* It offers visual-based with monotone colour and no audio game bringing a nostalgic environment.

### How to play HangMan - The Arcade?
Before running the program, it should be noted that HangMan - The Arcade requires (-std=c++11) flag to compile properly. To run the HangMan The Arcade, simply run the executable h and cpp files. Make sure to have the text file ready to fetch random words from the file.

When the game runs, enter your name which will be inserted into the scoreboards in another text file. Guess the word by entering one character at a time until you complete the word or you guess 7 wrong characters. You can continue the game as long as you want and collect scores as high as you can, so long as you dont get the HangMan.

### How object-oriented concepts were used to develop our game.
OOP programming paradigm by definition, groups objects by information and behaviour, which are just instances of classes. The classes establish hierarchies and relationships by defining the characteristics and methods of the objects and by being inherited from other classes. Objects can communicate with one another, alter their state, and take action by sending messages or invoking methods. OOP is very helpful for our game because it enables the representation of game things like characters, files, and messages as objects with characteristics and behaviours. It also enables game logic and data to be encapsulated into manageable units that can be reused and extended.

### How linked lists/stacks play a role in our game.
The Linked List we used is to store 2 types of data which is boolean and character. The character is from the word that the player need to guess. The boolean is named 'Hidden' and are true, until the player guessed the character. Then the 'Hidden' will be changed to false, revealing the character that they guessed.

The Stack are implemented for the use of displaying the HangMan whenever the player guessed a wrong character. The HangMan will be 'pop' 7 times until which the stack is empty. Then, the player loses.

### Screenshots of our game
Main menu screenShot
![ScreenShot](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/MainMenu.jpeg)

Guessing attempt screenshot
![ScreenShot](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/GuessingAttempt.jpeg)

Scores displayed
![ScreenShot](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/ScoresDisplayed.jpeg)

Displayed Rules
![ScreenShot](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/DisplayRules.jpeg)

Exit game sccreenshot
![ScreenShot](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/ExitGame.jpeg)

UML

![UML](https://github.com/zaimtolearn/hangman/blob/main/ScreenShots/UML.jpeg)

### Game demo video
* [Youtube Demo and Explanations](https://youtu.be/3v7DkxrtP-Y)
