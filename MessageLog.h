#pragma once
#include <string>

using namespace std;
class ChatMessages {
public:
    int messageID;
    string messageText;
    string date;
    string hashTag;

    bool isSpam;
    bool isBusiness;
    bool containsInsults;
    bool containsThreat;

    Message* nextMessage;

    Message(
        int messageID,
        string messageText,
        string date
    );
};

class MessageLogs {
private:
    Message* head;
    Message* tail;
    int length;

    bool isPingActive;

public:
    MessageLog();

    ~MessageLog();

    void verifyPingConnection(bool pingStatus);

    void receiveMessage(
        int messageID,
        std::string messageText,
        std::string date
    );

    void analyzeMessage(Message* currentMessage);

    void saveToFile();

    void printMessages();

    void addHashTag(
        Message* currentMessage
    );

}
