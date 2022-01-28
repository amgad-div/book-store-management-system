#pragma once

#ifndef User_H
#define User_H

#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include "log.h"

using namespace std;

class User
{
public:
	 void ListBookAll(); // List all book
    void ListBookByCategory(); // List book by category
    void BookInfor(); // See more information of one book
    void PrintUserArray(); // Output user information to User.txt
    void PrintBookArray(); // Output book information to Book.txt
    void PrintCash(); // Output cash information to Cash.txt
    int IsAllDigit(const string& str); // Check if str is all made of digital number
	
	//this function set information of User
	void Set_Password(string pwd);
	void Set_Username(string name);
	void Set_Status(int st);

	// this function Get information of User
	string GetPassword();
	string GetUsername();
	int GetStatus();

	// User choose to change his or her password
    void ChangePsw();
	
    // Virtual function : this function will be defined in each of its inheriting class
    virtual void Interface(string username) {};

private:
	// private atrribute of User class
	int status; // Status : 3 for Customer, 2 for Staff, 1 for Administartor, 0 for Not exist
	string password;
	string username;
	
};

#endif
