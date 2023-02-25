#include "User.h"

User::User()
	:sex(SEX::FEMALE), age(27), name("Ivan Ivanov"), location("London")
{
	preferences.push_back("Action");
	preferences.push_back("Fantasy");
	preferences.push_back("Religion");
	preferences.push_back("Historical Fiction");
	preferences.push_back("Biography");

	books.push_back(Book());
	books.push_back(Book(2018, 13, "Sarah Young", "Waiting for you", "Mission Opportunity", "Spirituality"));
	books.push_back(Book(2018, 11, "Michelle Obama", "Becoming", "Unknown", "Autobiography"));
}

User::User(SEX mSex, size_t mAge, std::string mName, std::string mLocation, std::vector<std::string> mPreferences, std::vector<Book> mBooks)
	:sex(mSex), name(mName), location(mLocation)
{
	if (mAge <= 0 || mAge > 100)
	{
		age = 27;
	}
	else
	{
		age = mAge;
	}

	for (size_t i = 0; i < mPreferences.size(); ++i)
	{
		preferences.push_back(mPreferences[i]);
	}

	for (size_t i = 0; i < mBooks.size(); ++i)
	{
		books.push_back(mBooks[i]);
	}
}

User::User(SEX mSex, size_t mAge, std::string mName, std::string mLocation)
	:sex(mSex), name(mName), location(mLocation)
{
	if (mAge <= 0 || mAge > 100)
	{
		age = 27;
	}
	else
	{
		age = mAge;
	}
}

User::User(const User& rhs)
{
	copyUser(rhs);
}

User& User::operator=(const User& rhs)
{
	if (this != &rhs)
	{
		copyUser(rhs);
	}

	return *this;
}

std::istream& operator>>(std::istream& in, User& obj)
{
	std::string input;
	do
	{
		in >> input;
	} while ((input != std::string("female")) && (input != std::string("FEMALE")) && (input != std::string("male")) && (input != std::string("MALE")));

	if ((input != std::string("female")) && (input != std::string("FEMALE")))
	{
		obj.sex = SEX::FEMALE;
	}
	else
	{
		obj.sex = SEX::MALE;
	}

	do
	{
		in >> obj.age;
	} while (obj.age < 5 || obj.age > 100);

	in >> obj.name;
	in >> obj.location;

	std::cout << "Enter count of yours preferences: ";
	size_t count;
	do {
		in >> count;
	} while (count < 1 || count > 30);


	std::string preference;
	for (size_t i = 0; i < count; ++i)
	{
		in >> preference;
		obj.preferences.push_back(preference);
	}

	std::cout << "Enter count of yours books: ";
	do {
		in >> count;
	} while (count < 0);

	Book inputBook;
	for (size_t i = 0; i < count; ++i)
	{
		in >> inputBook;
		obj.books.push_back(inputBook);
	}

	return in;
}

std::ostream& operator<<(std::ostream& out, const User& obj)
{
	out << "User name: " << obj.name << '\n';
	out << "User age: " << obj.age << '\n';
	out << "User sex: ";
	if (obj.sex == SEX::FEMALE)
	{
		out << "FEMALE\n";
	}
	else
	{
		out << "MALE\n";
	}

	out << "User location: " << obj.location << '\n';

	out << "User preferences:\n";
	for (size_t i = 0; i < obj.preferences.size(); ++i)
	{
		out << obj.preferences[i] << std::endl;
	}

	out << "User books:\n";
	for (size_t i = 0; i < obj.books.size(); ++i)
	{
		out << obj.books[i] << std::endl;
	}

	return out;
}

void User::setSex(const SEX& newSex)
{
	if (newSex == SEX::FEMALE)
	{
		sex = SEX::FEMALE;
	}
	else
	{
		sex = SEX::MALE;
	}
}

void User::setAge(const size_t& newAge)
{
	if (newAge <= 0 || newAge > 100)
	{
		age = 27;
	}
	else
	{
		age = newAge;
	}
}

void User::setName(const std::string& newName)
{
	name = newName;
}

void User::setLocation(const std::string& newLocation)
{
	location = newLocation;
}

void User::setPreferences(const std::vector<std::string>& newPreferences)
{
	this->preferences.clear();
	for (size_t i = 0; i < newPreferences.size(); ++i)
	{
		preferences.push_back(newPreferences[i]);
	}
}

void User::setBooks(const std::vector<Book>& newBooks)
{
	this->books.clear();
	for (size_t i = 0; i < newBooks.size(); ++i)
	{
		books.push_back(newBooks[i]);
	}
}

SEX User::getSex()const
{
	return sex;
}

unsigned User::getAge()const
{
	return age;
}

std::string User::getName()const
{
	return name;
}

std::string User::getLocation()const
{
	return location;
}

std::vector<std::string> User::getPreferences()const
{
	return preferences;
}

std::string User::getPreferenceAt(const size_t& index)const
{
	if (index < 0 || index > preferences.size())
	{
		throw std::out_of_range("Invalid index!");
	}

	return preferences[index];
}

std::vector<Book> User::getBooks()const
{
	return books;
}

Book User::getBookAt(const size_t& index)const
{
	if (index < 0 || index > books.size())
	{
		throw std::out_of_range("Invalid index!");
	}

	return books[index];
}

void User::copyUser(const User& rhs)
{
	setSex(rhs.sex);
	setAge(rhs.age);
	setName(rhs.name);
	setLocation(rhs.location);
	setPreferences(rhs.preferences);
	setBooks(rhs.books);
}
