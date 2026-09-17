#include <iostream>
#include <Project2.h>


using namespace std;

class Signal {
		Signal(int startping, string date, bool status, bool bIsBackup) {
			this->startping = startping;
			this->date = date;
			this->status = status;
			this->bIsBackup = false;
			
			this->nextping = nullptr;
		}
};

Backup::Backup() {

	backupHead = nullptr;
    backupTail = nullptr;
    length = 0;

}

void Backup::AddPing(int startping, string date, string status)
{
    Signal* newSignal = new Signal(startping, date, status);

    newSignal->bIsBackup = true;

    if (backupHead == nullptr)
    {
        backupHead = newSignal;
        backupTail = newSignal;
    }
    else
    {
        backupTail->nextping = newSignal;
        backupTail = newSignal;
    }

    length++;
}

void Backup::CreateBackup(Signal* originalHead, int originalLength) {
    Signal* current = originalHead;
	while (current != nullptr)
		{
			AddPing(
				current->startping,
				current->date,
				current->status
			);

			current = current->nextping;
		}

	cout << "Backup created successfully." << endl;
    cout << "Backup length: " << length << endl;

	
}

void Backup::printInfo() {
	Signal* current = backupHead;
	while (current != nullptr)
    {
        cout << "Ping: " << current->startping << endl;
        cout << "Date: " << current->date << endl;
        cout << "Status: " << current->status << endl;
        cout << "Backup: " << current->bIsBackup << endl;

        cout << "-------------------" << endl;

        current = current->nextping;
    }

    cout << "Total backup signals: " << length << endl;
}
	
}

Backup::~Backup() {
	
	Signal* current = backupHead;

    while (current != nullptr)
    {
        Signal* temp = current;

        current = current->nextping;

        delete temp;
    }

    backupHead = nullptr;
    backupTail = nullptr;
}
}


