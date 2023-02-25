#ifndef _BOOK_H_
#define _BOOK_H_

#include <iostream>
#include <string>

/// 
/// Class 'Book' describes what one book contains.
/// 
class Book
{
public:
	Book();
	Book(size_t mYear, double mRating, std::string mAuthor, std::string mTitle, std::string mPublishingHouse, std::string mGenre);
	Book(const Book& rhs);
	Book& operator=(const Book& rhs);

	/// input from the console for a Book
	friend std::istream& operator>>(std::istream& in, Book& obj);

	/// formatted output for a Book on the console
	friend std::ostream& operator<<(std::ostream& out, const Book& obj);


	/// setters for the attributes of Book
	void setYear(const size_t& newYear);
	void setRating(const double& newRating);
	void setAuthor(const std::string& author);
	void setTitle(const std::string& title);
	void setPublishingHouse(const std::string& publishingHouse);
	void setGenre(const std::string& genre);

	/// getters for the attributes of Book
	size_t getYear()const;
	double getRating()const;
	std::string getAuthor()const;
	std::string getTitle()const;
	std::string getPublishingHouse()const;
	std::string getGenre()const;

private:
	size_t      year;
	double      rating;
	std::string author;
	std::string title;
	std::string publishingHouse;
	std::string genre;

	/// helper method for operator= and copy ctor
	void copyBook(const Book& rhs);

};

#endif /// _BOOK_H_
