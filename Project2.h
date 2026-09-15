class Backup {
private:

Signal* backupHead;
Signal* backuptrail;

public:
Backup() {
  backupHead = nullptr;
  backuptrail = nullptr;
}

void createBackup(Signal* originalHead, Signal* originalLength);
void printInfo();

~Backup();


}
