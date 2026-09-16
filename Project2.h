#pragma once
using namespace std;
class Signal {
public:
int startping;
string date;
string status;
bool bIsBackup;
Signal* nextping;

 Signal(int startping, string date, string status);

}

class Backup
{

private:
    Signal* backupHead;
    Signal* backupTail;
    int length;

public:
    Backup();

    void createBackup(Signal* originalHead, int originalLength);

    void printInfo();

    void AddPing(int startping, std::string date, std::string status);

    ~Backup();


}
