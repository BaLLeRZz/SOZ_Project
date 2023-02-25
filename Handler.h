#ifndef _HANDLER_H_
#define _HANDLER_H_

#include "Algorithms.h"

///  
/// Builds a book recommendation system- there is a created database for 
/// users and books and function which execute the whole program.
/// 
class Handler 
{
public:
	/// set of database of books
	const std::vector<Book> fill_books_database();

	/// set of database of users
	const std::vector<User> fill_users_database();

	/// helper function which print recommendations 
	void print(std::vector<Book>& recommendations);

	/// Input user data again
	void input_preferences(User& client);

	///
	/// [run]: Here the database for users and books is created. 
	/// The idea of this function is to tests the algorithms for generating recommendations for buying a book.
	/// 
	void run();

};

#endif /// _HANDLER_H_
