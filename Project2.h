class Backup {
private:

Signal* backupHead;
Signal* backuptrail;
int length;

public:
Backup() {
  backupHead = nullptr;
  backuptrail = nullptr;
  int length = 24;
}

Server(int startping);

~Server();

void createBackup(Signal* originalHead, Signal* originalLength);
void printInfo();
void AddPing(int startping);

~Backup();


}
