#include "Algorithms.h"

void algorithms::generateRecommendationByAuthor(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; i++) 
	{
		if (user.getPreferenceAt(2) == books[i].getAuthor())
		{
			recommendation.push_back(books[i]);
		}
	}
}

void algorithms::generateRecommendationByPublishingHouse(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; ++i)
	{
		if (user.getPreferenceAt(3) == books[i].getPublishingHouse())
		{
			recommendation.push_back(books[i]);
		}
	}
}

void algorithms::generateRecommendationByGenre(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; i++) 
	{
		if (user.getPreferenceAt(4) == books[i].getGenre())
		{
			recommendation.push_back(books[i]);
		}
	}
}

void algorithms::generateRecommendationByRating(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; ++i)
	{
		if (std::to_string(books[i].getRating()) >= user.getPreferenceAt(1))
		{
			recommendation.push_back(books[i]);
		}
	}
}

void algorithms::generateRecommendationByPreferences(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; ++i)
	{
		if (user.getPreferenceAt(0) == std::to_string(books[i].getYear()))
		{
			recommendation.push_back(books[i]);
		}
		else if (user.getPreferenceAt(1) == std::to_string(books[i].getRating()))
		{
			recommendation.push_back(books[i]);
		}
		else if (user.getPreferenceAt(2) == books[i].getAuthor())
		{
			recommendation.push_back(books[i]);
		}
		else if (user.getPreferenceAt(3) == books[i].getPublishingHouse())
		{
			recommendation.push_back(books[i]);
		}
		else if (user.getPreferenceAt(4) == books[i].getGenre())
		{
			recommendation.push_back(books[i]);
		}
	}
}

void algorithms::generateRecommendationByLocation(const User& user, const std::vector<User>& userDatabase, std::vector<Book>& recommendation)
{
	unsigned size = userDatabase.size();
	for (unsigned i = 0; i < size; ++i)
	{
		if (user.getLocation() == userDatabase[i].getLocation())
		{
			for (unsigned j = 0; j < userDatabase[i].getBooks().size(); ++j)
			{
				recommendation.push_back(userDatabase[i].getBookAt(j));
			}
		}
	}
}

void algorithms::generateRecommendationByAge(const User& user, const std::vector<User>& userDatabase, std::vector<Book>& recommendation)
{
	unsigned size = userDatabase.size();
	for (unsigned i = 0; i < size; ++i)
	{
		if (user.getAge() == userDatabase[i].getAge())
		{
			for (unsigned j = 0; j < userDatabase[i].getBooks().size(); ++j)
			{
				recommendation.push_back(userDatabase[i].getBookAt(j));
			}
		}
	}
}

void algorithms::generateRecommendationByYear(const User& user, const std::vector<Book>& books, std::vector<Book>& recommendation)
{
	size_t size = books.size();
	for (size_t i = 0; i < size; i++) 
	{
		if (user.getPreferenceAt(0) == std::to_string(books[i].getYear()))
		{
			recommendation.push_back(books[i]);
		}
	}
}
