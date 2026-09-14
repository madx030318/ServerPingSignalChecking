#include <iostream>

using namespace std;

class Signal {
	public:
		int startping;
        string date;
        string status;
        bool bIsBackup;
		Signal* nextping;
		
		Signal(int startping) {
			this->startping = startping;
			this->date = date;
			this->status = status;
			bIsBackup = false;
			
			nextping = nullptr;
		}
};

class Generation {
	private:
		Signal* head;
		Signal* tail;
		int length;
	
	public:
		Generation(int startping, string date, string status) {
		
		Signal* newCode = new Signal(startping, date, status);
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
	if (length == 24 && newCode->status = "ON") {
        cout << "No interruptions throughout the ping process." << endl;
    }
    else {
		cout << "There is interruption within ping cycle." << endl;
        cout << "There is interruption within ping cycle. System is rebooting. Ping is stopped." << endl;
    }
	}

    void DoesBackupWasCreated() {
		if (head !== nullptr && head->status == "ON") {
			cout << "Server discovered." << endl;
			cout << "Server is active." << endl;
		}

		else {
			cout << "Server is disabled" << endl;
			head->bIsBackup= true;
			cout << "Creating server backup..." << endl;
			cout << "Backup created successfully." << endl;
		}
		
	}

	}
	 
	
};
