#pragma once

#ifndef SystemBookStore_H
#define SystemBookStore_H

#include <vector>
#include"User.h"
#include"Book.h"
   /*
              this class to read information about User and Books from files
   */

class SystemBookStore
{

public:
	 void LoadUser(); // Load user from User.txt
    void LoadBook(); // Load book from Book.txt
    void LoadCash(); // Load Cash.txt
    void SetIncome(double new_income) { income = new_income; }; // Change income
    void SetOutcome(double new_outcome) { outcome = new_outcome; }; // Change outcome
    double GetIncome() { return income; };
    double GetOutcome() { return outcome; };
    vector<Book> BookArray; // Store all books in vector
    vector<User> UserArray; // Store all users in vector
private:
    double income; // Total income
    double outcome; // Total outcome


};

#endif
