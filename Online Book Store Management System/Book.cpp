#include "Book.h"

#include <string>
#include<iostream>
using namespace std;
/*
Book::Book(void)
{
}*/
  // this fuctions to set information of book
	void Book::SetName(string NewName)
	{
		name=NewName;
	}
	void Book::SetAuthor(string NewAuthor)
	{
		author=NewAuthor;
	}
	void Book::SetPrice(double NewPrice)
	{
		price=NewPrice;
	}
	void Book::SetCategory(int NewCategory)
	{
		category=NewCategory;
	}
	void Book::SetIsbn(string NewIsbn)
	{
		isbn=NewIsbn;
	}

// this funtions to get information of books
	 string Book::GetName()
	 {
		 return name;
	 }
	 string Book::GetAuthor()
	 {
		 return author;
	 }
	 string Book::GetIsbn()
	 {
		 return isbn;
	 }
	 double Book::GetPrice()
	 {
		 return price;
	 }
	 int Book::GetCategory()
	 {
		 return category;
	 }
/*
     //////////test
int main()
{
	Book k;
	k.SetName("Book 1");
	k.SetPrice(56.5);
	k.SetIsbn("amgad nady");
	cout<<k.GetName()<<" "<<k.GetPrice();
	system("pause");
}*/