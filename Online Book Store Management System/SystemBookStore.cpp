#include "SystemBookStore.h"


void SystemBookStore::LoadUser() { // Load User.txt
    User olduser;
    string str;
    ifstream fin("User.txt"); // Open and read User.txt

    if(!fin) { // If can't open
        cerr << "User.txt can't open" << endl;
        abort(); // Exit
    }
    while (getline(fin, str)) {
        size_t i = str.find(" "); // Find fisrt spacebar
        olduser.Set_Username(str.substr(0, i)); // Divide str by spacebar and get username
        str = str.substr(i+1);

        i = str.find(" "); // Find second spacebar
        olduser.Set_Username(str.substr(0, i)); // Divide str by spacebar and get password
        olduser.Set_Status(stoi(str.substr(i+1))); // Divide str by spacebar and get status

        UserArray.push_back(olduser); // Add to lib.UserArray
    }
    fin.close(); // Close User.txt
}

// function to load data from book.txt
 void SystemBookStore::LoadBook()
 {
	 Book oldbook;
	 string str;
	 ifstream fin("Book.txt");
	 if(!fin)
	 {
	    cerr << "Book.txt can't open" << endl;
        abort(); // Exit
	 }
	  while (getline(fin, str)) {
        size_t i = str.find(" "); // Find fisrt spacebar
        oldbook.SetName(str.substr(0, i)); // Divide str by spacebar and get bookname
        str = str.substr(i+1);

        i = str.find(" "); // Find second spacebar
        oldbook.SetIsbn(str.substr(0, i)); // Divide str by spacebar and get ISBN number
        str = str.substr(i+1);

        i = str.find(" ");
        oldbook.SetAuthor(str.substr(0, i)); // Divide str by spacebar and get author
        str = str.substr(i+1);

        i = str.find(" ");
        oldbook.SetCategory(stoi(str.substr(0, i))); // Divide str by spacebar and get category number
        str = str.substr(i+1);

        i = str.find(" ");
        oldbook.SetPrice(stoi(str.substr(0, i))); // Divide str by spacebar and get price
        str = str.substr(i+1);

        BookArray.push_back(oldbook); // Add to lib.BookArray
    }
    fin.close(); // Close Book.txt

 }
 void SystemBookStore::LoadCash() { // Load Cash.txt
    ifstream fin("Cash.txt"); // Open and read Book.txt
    if(!fin) { // If can't open
        cerr << "Cash.txt can't open" << endl;
        abort(); // Exit
    }
    fin >> income; // Input income
    fin >> outcome; // Input outcome
    fin.close(); // Close Cash.txt
}