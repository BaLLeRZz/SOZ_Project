#ifndef _ALGORITHMS_H_
#define _ALGORITHMS_H_

#include "User.h"

///  
/// A namespace which contains algorithms which generate recommendations for buying a book.
/// 
namespace algorithms
{
	/// Generate recommendation by book author.
	void generateRecommendationByAuthor(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation);

	/// Generate recommendation by book publishing house.
	void generateRecommendationByPublishingHouse(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation);

	/// Generate recommendation by book genre.
	void generateRecommendationByGenre(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation);

	/// Generate recommendation by book rating.
	void generateRecommendationByRating(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation);

	/// Generate recommendation by user preferences.
	void generateRecommendationByPreferences(const User& user, const std::vector<Book> books, std::vector<Book>& recommendation);

	/// Generate recommendation by user location.
	void generateRecommendationByLocation(const User& user, const std::vector<User>& userDatabase, std::vector<Book>& recommendation);

	/// Generate recommendation by user age.
	void generateRecommendationByAge(const User& user, const std::vector<User>& userDatabase, std::vector<Book>& recommendation);

	/// Generate recommendation by year.
	void generateRecommendationByYear(const User& user, const std::vector<Book>& books, std::vector<Book>& recommendation);

}

#endif /// _ALGORITHMS_H_
