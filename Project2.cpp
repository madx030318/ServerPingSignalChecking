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


