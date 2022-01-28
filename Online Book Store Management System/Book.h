
//#include<iostream>
#pragma once
#ifndef Book_H
#define Book_H

#include <string>

using namespace std;

class Book
{
public:
	// this functions to set new information of book
	void SetName(string NewName);
	void SetAuthor(string NewAuthor);
	void SetPrice(double NewPrice);
	void SetCategory(int NewCategory);
	void SetIsbn(string NewIsbn);
	 void SetNumber(int new_number) { number = new_number; }

	//this function to get information about book
	 string GetName();
	 string GetAuthor();
	 string GetIsbn();
	 double GetPrice();
	 int GetCategory();
	 int GetNumber() { return number; }

private:
	string  name;
	string author;
	int number;
	 string isbn; // ISBN number
	double  price ; // Unit-price of book
	int category; // The category number
	
};
#endif
