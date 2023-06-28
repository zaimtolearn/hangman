#include "hangMan.h"
#include <iostream>
#include <string>

hangMan::hangMan(){
	top = -1;
    }

void hangMan::pushHangMan(){
		bodyParts[++top] = "---------    \n"
	                        "|       |    \n"
	                        "|       O    \n"
	                        "|      /|\\  \n"
	                        "|      / \\  \n"
	                        "-            \n";
		bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|       O    \n"
                            "|      /|\\  \n"
                            "|      /     \n"
                            "-            \n";

        bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|       O    \n"
                            "|      /|\\  \n"
                            "|            \n"
                            "-            \n";

        bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|       O    \n"
                            "|      /|    \n"
                            "|            \n"
                            "-            \n";

        bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|       O    \n"
                            "|       |    \n"
                            "|            \n"
                            "-            \n";

        bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|       O    \n"
                            "|            \n"
                            "|            \n"
                            "-            \n";

        bodyParts[++top] = "---------    \n"
                            "|       |    \n"
                            "|            \n"
                            "|            \n"
                            "|            \n"
                            "-            \n";
}

void hangMan::displayHangman(){
    cout << bodyParts[top--] << endl;
}

string hangMan::getTopBodyPart() const {
    return bodyParts[top];
} 

void hangMan::clearStack(){
	top = -1;
}
