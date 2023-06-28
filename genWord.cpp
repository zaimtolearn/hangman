#include "genWord.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string genWord::randomWord(){
	ifstream infile;
	int num, i=1;
	string temp;
	srand(time(0));
	num = 1+(rand()%75);

	infile.open("wordfile.txt");
	while(getline(infile, temp)){
		if(i!=num){
			i++;
			continue;
		}
		break;
	}
	word=temp;
	return word;
}

void genWord::printWord() {
	cout << word << endl;
}
