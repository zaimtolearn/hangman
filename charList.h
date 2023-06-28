#ifndef CHARLIST_H
#define CHARLIST_H
using namespace std;

class charList{
	private:
		struct ListNode{
			char character;
			bool hidden;
			struct ListNode *next;
		};

		ListNode *head;

	public:
		charList(){
			head = nullptr;
		}

		void appendNode(char);
		void displayList();
		void clearList();
    	bool isCorrect(char);
  		bool isRevealed();
  		~charList(){};
};

#endif
