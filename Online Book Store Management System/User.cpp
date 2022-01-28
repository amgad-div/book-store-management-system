#include "User.h"
#include "SystemBookStore.h"


extern log rec;
extern SystemBookStore lib;
extern string account;


   // function set information of user
	void User::Set_Password(string pwd)
	{
		  password=pwd;
	
	}
	void User::Set_Username(string name)
	{
		username=name;
	}
	void User::Set_Status(int st)
	{
		status=st;
	}

	// function set information of user
	string User::GetPassword()
	{
		return password;
	}
	string User::GetUsername()
	{
		return username;
	}
	int User::GetStatus()
	{
		return status;
	}

	void User::PrintUserArray()
	{
		ofstream fout;
		fout.open("User.txt"); // Open and cover User.txt
		if (!fout) { // If can't open
			cerr << "User.txt can't open" << endl;
			abort(); // Exit
		}
		for (size_t i = 0; i < lib.UserArray.size(); i++ ) // Output each user's information
			fout << lib.UserArray[i].GetUsername() << " " << lib.UserArray[i].GetPassword() << " " << lib.UserArray[i].GetStatus() << endl;
		fout.close(); // Close User.txt

	}

	int main()
	{
		User r;
		r.Set_Username("amsdasd");
		cout<<r.GetUsername();
		
		system("pause");
	}