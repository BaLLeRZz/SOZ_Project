#include "Book.h"

Book::Book()
	:year(2010), rating(3), author("Tim Storey"), title("Comeback & Beyond"), publishingHouse("Harrison House"), genre("Spirituality")
{}

Book::Book(size_t mYear, double mRating, std::string mAuthor, std::string mTitle, std::string mPublishingHouse, std::string mGenre)
	: author(mAuthor), title(mTitle), publishingHouse(mPublishingHouse), genre(mGenre)
{
	if (mYear < 1000 || mYear > 10000)
	{
		year = 2010;
	}
	else
	{
		year = mYear;
	}

	if (mRating < 1 || mRating > 5)
	{
		rating = 3;
	}
	else
	{
		rating = mRating;
	}
}

Book::Book(const Book& rhs)
{
	copyBook(rhs);
}

Book& Book::operator=(const Book& rhs)
{
	if (this != &rhs)
	{
		copyBook(rhs);
	}

	return *this;
}

std::istream& operator>>(std::istream& in, Book& obj)
{
	do
	{
		in >> obj.year;
	} while (obj.year < 1000 || obj.year > 10000);

	do
	{
		in >> obj.rating;
	} while (obj.rating < 1 || obj.rating > 5);

	in >> obj.author;
	in >> obj.title;
	in >> obj.publishingHouse;
	in >> obj.genre;

	return in;
}

std::ostream& operator<<(std::ostream& out, const Book& obj)
{
	out << "Title: \"" << obj.title << "\" \n";
	out << "Author: " << obj.author << '\n';
	out << "Genre: " << obj.genre << '\n';
	out << "Year: " << obj.year << '\n';
	out << "Publishing House: " << obj.publishingHouse << '\n';
	out << "Rating: " << obj.rating << '\n';

	return out;
}

void Book::setYear(const size_t& newYear)
{
	if (newYear < 1000 || newYear > 10000)
	{
		year = 2010;
	}
	else
	{
		year = newYear;
	}
}

void Book::setRating(const double& newRating)
{
	if (newRating < 1 || newRating > 5)
	{
		rating = 3;
	}
	else
	{
		rating = newRating;
	}
}

void Book::setAuthor(const std::string& author)
{
	this->author = author;
}

void Book::setTitle(const std::string& title)
{
	this->title = title;
}

void Book::setPublishingHouse(const std::string& publishingHouse)
{
	this->publishingHouse = publishingHouse;
}

void Book::setGenre(const std::string& genre)
{
	this->genre = genre;
}

size_t Book::getYear()const
{
	return year;
}

double Book::getRating()const
{
	return rating;
}

std::string Book::getAuthor()const
{
	return author;
}

std::string Book::getTitle()const
{
	return title;
}

std::string Book::getPublishingHouse()const
{
	return publishingHouse;
}

std::string Book::getGenre()const
{
	return genre;
}

void Book::copyBook(const Book& rhs)
{
	setYear(rhs.year);
	setRating(rhs.rating);
	setAuthor(rhs.author);
	setTitle(rhs.title);
	setPublishingHouse(rhs.publishingHouse);
	setGenre(rhs.genre);
}
