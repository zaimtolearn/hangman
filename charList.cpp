#include "charList.h"
#include <iostream>
using namespace std;

void charList::appendNode(char tempchar){
	ListNode *newNode = new ListNode, *nodePtr = head;

	newNode= new ListNode;
	newNode->character = tempchar;
	newNode->hidden = true;
	newNode->next = nullptr;

	if(!head){
		head = newNode;
	}
	else{
		nodePtr = head;
		while(nodePtr->next)
			nodePtr = nodePtr->next;

		nodePtr->next = newNode;
	}
}

void charList::displayList(){
	ListNode *nodePtr = nullptr;
	nodePtr = head;

	while(nodePtr){
		if(nodePtr->hidden) cout << "_ ";
    else cout << nodePtr->character;
		nodePtr = nodePtr->next;
	}
}

 bool charList::isCorrect(char guess){
  ListNode *temp;
  bool correctGuess=false;
  temp = head;

  while(temp != nullptr){
    if(temp->character == guess) {
      temp->hidden = false;
      correctGuess=true;
    }
    temp = temp->next;
  }

  return correctGuess;
}

bool charList::isRevealed(){
  bool isnothid=true;
  ListNode *temp=head;

  while(temp != nullptr){
    if(temp->hidden == true){
      isnothid = false;
    }
    temp=temp->next;
  }
  return isnothid;
}

void charList::clearList() {
    ListNode* currentNode = head;
    while (currentNode != nullptr) {
        ListNode* temp = currentNode;
        currentNode = currentNode->next;
        delete temp;
    }
    head = nullptr;
}
