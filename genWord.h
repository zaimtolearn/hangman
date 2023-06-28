#ifndef GENWORD_H
#define GENWORD_H
#include <string>
using namespace std;

class genWord{
	private:
    string word;
  public:
		genWord(){word = "";}
		string randomWord();
		void printWord();
};

#endif
