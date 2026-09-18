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
