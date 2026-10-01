#include <vector>
#include <string>

Message::Message(
int messageID,
string messageText,
string date
)
{
    this->messageID = messageID;
    this->messageText = messageText;
    this->date = date;

    this->isSpam = false;
    this->isBusiness = false;
    this->containsInsults = false;
    this->containsThreat = false;

    this->hashTag = "#N/A";

    this->nextMessage = nullptr;
}
MessageLog::MessageLog() {

  head = nullptr;
  tail = nullptr;
  length = 1;
  isPingActive = false;
  


}

MessageLog::~MessageLog() {

  MessageLog* current = head;
  while (current != nullptr) {
    MessageLog* temp =  current;
    current = current->nextMessage;
    delete temp;
  }

  head = nullptr;
  tail = nullptr;

}

 void MessageLog::printMessages() {
     if (IsPingActive == false)
     {
         cout << "Ping is inactive. Messages cannot be processed." << endl;
         return;

     }

     Message *current = head;
     while (current != nullptr) {
         cout << "Message ID: " << current->messageID << endl;
         cout << "Message: " << current->messageText << endl;
         cout << "Date: " << current->date << endl;

         current = current->nextMessage;
     }

 }

void MessageLog::receiveMessage( int messageID, string messageText, string date) {
    if (isPingActive == false)
{
    cout << "Ping is inactive. Message rejected." << endl;
    return;
}

}
