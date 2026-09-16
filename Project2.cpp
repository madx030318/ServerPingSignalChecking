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
	while (current == nullptr)
		{
			AddPing(
				current->startping,
				current->date,
				current->status
			)
		}
}


