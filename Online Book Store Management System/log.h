#ifndef log_H
#define log_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class log {
public:
    void UserLog(string loginname, string username, string operation, int status); // Add new information to UserLog.txt
    void BookLog(string loginname, string bookisbn, string operation, int number); // Add new information to BookLog.txt
    void CashLog(string loginname, string bookisbn, string operation, double money); // Add new information to CashLog.txt
};

#endif
