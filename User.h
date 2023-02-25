#ifndef _USER_H_
#define _USER_H_

#include <vector>
#include "Book.h"

/// 
/// Helper type for User's gender.
/// 
enum class SEX
{
	FEMALE, // 0
	MALE    // 1
};

/// 
/// Class 'User' describes what will be saved as an information for one person.
/// 
class User
{
public:
	User();
	User(SEX mSex, size_t mAge, std::string mName, std::string mLocation, std::vector<std::string> mPreferences, std::vector<Book> mBooks);
	User(SEX mSex, size_t mAge, std::string mName, std::string mLocation);
	User(const User& rhs);
	User& operator=(const User& rhs);

	/// input from the console for User
	friend std::istream& operator>>(std::istream& in, User& obj);

	/// formatted output for the User on the console
	friend std::ostream& operator<<(std::ostream& out, const User& obj);


	/// setters for the attributes of User
	void setSex(const SEX& newSex);
	void setAge(const size_t& newAge);
	void setName(const std::string& newName);
	void setLocation(const std::string& newLocation);
	void setPreferences(const std::vector<std::string>& newPreferences);
	void setBooks(const std::vector<Book>& newBooks);


	/// getters for the attributes of User
	SEX getSex()const;
	size_t getAge()const;
	std::string getName()const;
	std::string getLocation()const;
	std::vector<std::string> getPreferences()const;
	std::string getPreferenceAt(const size_t& index)const;
	std::vector<Book> getBooks()const;
	Book getBookAt(const size_t& index)const;

private:
	SEX      sex;
	size_t age;

	/// [name]: User's name.
	std::string name;

	/// [location]: Information about which region the user is living in. 
	/// Will help for generating recommendations for buying a book.
	std::string location;

	/// [preferences]: Saves information about what kinds of books the user likes. 
	/// It will be used in sorting algorithms for generating recommendations for buying a book.
	std::vector<std::string> preferences;

	/// [books]: List of books which the user likes and has read.
	std::vector<Book> books;

	/// helper method for operator= and copy ctor
	void copyUser(const User& rhs);

};

#endif /// _USER_H_
