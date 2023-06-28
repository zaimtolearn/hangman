#ifndef MAN_H
#define MAN_H
#include <string>

using namespace std;

class hangMan {
private:
    string bodyParts[7]; 
    int top;

public: 
	hangMan();
	void pushHangMan();
    void displayHangman();
    string getTopBodyPart() const;
    void clearStack();
};

#endif 
