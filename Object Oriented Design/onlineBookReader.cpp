#include<iostream>
using namespace std;

/*
		ONLINE BOOK READER
	Assumptions: 
		-> For now only one user can read a book
		-> Searching database for books
		-> Display for reading book
		-> Collection/Store for books
		-> User management
		
*/

class OnlineReaderSystem
{
private:
	Library Library;
	UserManager UserManager;
	Display Disp;
	
	Book activeBook;
	User activeUser;
	
public:
	OnlineReaderSystem()
	{
		UserManager = new UserManager();
		Library = new Library();
		Dis = new Display();
	}
	
	Library getLibrary() { return Library; }
	UserManager getUserManger() {return UserManager;}
	Display getDisplay() {return Disp}
	
	Book getActiveBook() {return activeBook}
	Book setActiveBook(Book book) {activeBook = book}
	
	User getActiveUser() {return activeUser}
	User setActiveUser(User user) {activeUser = user}
};

class Library()
{
private:
	unordered_set<int, Book> books;

public:
	Book addBook(int bookId, Book book)
	{
		if(books.find(bookId) == book)
			books[bookId] = book;
		
		return book;	
	}
	
	bool findBook(int bookId)
	{
		return books.find(bookId) != books.end();
	}
};


class UserManager
{
private:
	unordered_set<integer, User> Users;
	
public: 
	User addUser(int id, User user)
	{
		Users[id] = users;
		return user;
	}
	
	User removeUser(int id)
	{
		User removedUser = Users[id];
		Users.remove(id);
		return removedUser;
	}
	
	User find(int id)
	{
		// find user
	}
	
	User remove(int id)
	{
		Users.remove(id);
	}
	
};


class Display
{
private:
	Book ActiveBook;
	User ActiveUser;
	int PageNumber;
	
public: 
	
	Display(User user)
	{
		ActiveUser = user;
		refreshDisplay();
	}
	
	void displayBook(Book book)
	{
		pageNumber = 0;
		activeBook = book;
		
		
		rerfreshTitle();
		refreshDetails();
		refreshPage();
	}
	
	void turnPageForward();
	void turnPageBackward();
	
	void refreshUserName();
	void refreshTitle();
	void refreshDetails();
	void refreshPage();
};


class Book 
{
private:
	int BookId;
	String Details;
	
	public Book(int id, string det)
	{
		BookId = id;
		Details = det;
	}
	
public: 
	int getId(){return BookId};
	string getDetails();
	void setId(int id);
	
};


class User
{
private:
	int UserId;
	string details
	int accountType;
	
public: 
	void renewMembership();
	.
	.
	.
	
	
};

int main()
{
	
	return 0;
}