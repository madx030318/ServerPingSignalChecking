#include <iostream>

using namespace std;

class Signal {
	public:
		int startping;
		Signal* nextping;
		
		Signal(int startping) {
			this->startping = startping;
			nextping = nullptr;
		}
};

class Generation {
	private:
		Signal* head;
		Signal* tail;
		int length;
	
	public:
		Generation(int startping) {
		
		Signal* newCode = new Signal(startping);
		head = newCode;
		tail = newCode;
		length = 24;
		
	}
	
		
	}
	
	void printList() {
		Signal* temp = head;
		if (temp != nullptr) {
			cout << temp->ping << endl;
			cout << texmp->next;
			cout << "The Server cycle is over. System works correctly ";
		}
	}
	
	void checktheCycleCorrectness(int startping) {
	if (length == 24) {
        cout << "No interruptions throughout the ping process." << endl;
    }
    else {
        cout << "There is interruption within ping cycle. System is rebooting. Ping is stopped." << endl;
    }
}
	}
	 
	
};
