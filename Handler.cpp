#include "Handler.h"

const std::vector<Book> Handler::fill_books_database() 
{
	std::vector<Book> books{};
	const Book book1(1991, 4.4, "Jules Verne", "Journey to the Center of the Earth", "Bantam", "Action");
	const Book book2(2015, 4.8, "Michael Crichton", "Jurassic Park", "Arrow", "Action");
	const Book book3(2015, 4.7, "James Dashner", "The Maze Runner and the Scorch Trials", "Delacorte Press", "Action");
	const Book book4(2021, 4.6, "Mark Twain", "Adventures of Huckleberry Finn", "SeaWolf Press", "Action");
	const Book book5(2008, 4.4, "Johann David Wyss", "The Swiss Family Robinson", "Bantam", "Action");
	const Book book6(2005, 4.5, "Edith Grossman", "Don Quixote", "Ecco", "Action");
	const Book book7(2009, 4.5, "Neil Gaiman", "Stardust", "HarperCollins Publishers", "Action");
	const Book book8(1999, 4.5, "Sir William Golding", "Lord of the Flies", "Penguin Publishing Group", "Action");
	const Book book9(2016, 4.3, "Daniel Defoe", "Robinson Crusoe", "SIGNET CLASSICS", "Action");
	const Book book10(2010, 4.2, "Robert Ludlum", "The Bourne Identity", "Bantam", "Action");
	const Book book11(2011, 4.5, "George R. R. Martin", "Game of Thrones", "Random House Publishing Group", "Fantasy");
	const Book book12(2008, 4.7, "Patrick Rothfuss", "The Name of the Wind", "Astra Publishing House", "Fantasy");
	const Book book13(2014, 4.7, "Brandon Sanderson", "The Way of Kings", "Tor Publishing Group", "Fantasy");
	const Book book14(2012, 4.1, "Ursula K. Le Guin", "A Wizard of Earthsea", "HarperCollins Publishers", "Fantasy");
	const Book book15(1996, 4.5, "Robin Hobb", "Assassin's Apprentice", "Random House Publishing Group", "Fantasy");
	const Book book16(2007, 4.5, "Scott Lynch", "The Lies of Locke Lamora", "Random House Publishing Group", "Fantasy");
	const Book book17(2020, 4.6, "Jacqueline Carey", "Kushiel's Dart", "Tor Publishing Group", "Fantasy");
	const Book book18(2016, 4.0, "Neil Gaiman", "American Gods", "HarperCollins Publishers", "Fantasy");
	const Book book19(2012, 4.3, "Erin Morgenstern", "The Night Circus", "Knopf Doubleday Publishing Group", "Fantasy");
	const Book book20(2006, 4.5, "Patricia Briggs", "Moon Called", "Penguin Publishing Group", "Fantasy");
	const Book book21(2002, 4.7, "Jack Hawley", "Bhagavad Gita", "Goldmann Verlag", "Religion");
	const Book book22(2020, 4.6, "Martin Luther", "DIE BIBEL", "Independently published", "Religion");
	const Book book23(2012, 4.8, "Trey Parker", "The Book of Mormon", "Newmarket Press", "Religion");
	const Book book24(2021, 4.7, "Samuel L. Bray", "The 1662 Book of Common Prayer", "IVP Academic", "Religion");
	const Book book25(2020, 4.7, "Talal Itani", "The Holy Quran", "Independently published", "Religion");
	const Book book26(2017, 4.7, "Bibek Debroy", "The Valmiki Ramayana", "Penguin Publishing Group", "Religion");
	const Book book27(2014, 4.6, "Chajm Guski", "Die Torah", "BoD – Books on Demand", "Religion");
	const Book book28(2004, 4.9, "Kathy Morris", "Gateway to Knowledge", "Rangjung Yeshe Publications", "Religion");
	const Book book29(2012, 4.7, "Klaus Antoni", "Kojiki", "Verlag der Weltreligionen", "Religion");
	const Book book30(1999, 4.6, "Stephen Mitchell", "Tao Te Ching", "Frances Lincoln", "Religion");
	const Book book31(2017, 4.4, "Margaret Atwood", "alias Grace", "Piper Taschenbuch", "Historical Fiction");
	const Book book32(2019, 4.6, "Ken Follett", "Die Saulen der Erde", "Lubbe", "Historical Fiction");
	const Book book33(2015, 4.5, "Anthony Doerr", "All the Light We Cannot See", "Fourth Estate", "Historical Fiction");
	const Book book34(2017, 4.5, "Colson Whitehead", "The Underground Railroad", "Fleet", "Historical Fiction");
	const Book book35(2017, 4.5, "Min Jin Lee", "Pachinko", "Grand Central Publishing", "Historical Fiction");
	const Book book36(2002, 4.5, "Anita Diamant", "The Red Tent", "MacMillan", "Historical Fiction");
	const Book book37(2017, 4.6, "Yaa Gyasi", "Homegoing", "Penguin Publishing Group", "Historical Fiction");
	const Book book38(2016, 4.6, "Markus Zusak", "The Book Thief", "Black Swan", "Historical Fiction");
	const Book book39(2015, 4.8, "Diana Gabaldon", "Outlander", "Delacorte Press", "Historical Fiction");
	const Book book40(2022, 4.7, "Toni Morrison", "Beloved", "Vintage Classics", "Historical Fiction");
	const Book book41(2011, 4.5, "Sylvia Nasar", "A Beautiful Mind", "Simon & Schuster", "Biography");
	const Book book42(1992, 4.3, "Andrew Hodges", "Alan Turing: The Enigma", "Vintage Books", "Biography");
	const Book book43(2005, 4.8, "Ron Chernow", "Alexander Hamilton", "Penguin Publishing Group", "Biography");
	const Book book44(2021, 4.2, "Zora Neale Hurston", "Barracoon", "Penguin Publishing Group", "Biography");
	const Book book45(1992, 4.6, "Martin Gilbert", "Churchill: A Life", "HENRY HOLT", "Biography");
	const Book book46(2016, 4.8, "David Bodanis", "E=mc2: A Biography of the World's Most Famous Equation", "Pan", "Biography");
	const Book book47(2007, 4.5, "Sonia Nazario", "Enrique's Journey", "Random House Publishing Group", "Biography");
	const Book book48(2021, 5, "Luis-Martin Lozano", "Frida", "TASCHEN", "Biography");
	const Book book49(2019, 4.7, "Rebecca Skloot", "The Immortal Life of Henrietta Lacks", "Picador", "Biography");
	const Book book50(2020, 4.7, "Miro Tartan", "Into the Wild", "Miro Tartan", "Biography");
	books.push_back(book1);
	books.push_back(book2);
	books.push_back(book3);
	books.push_back(book4);
	books.push_back(book5);
	books.push_back(book6);
	books.push_back(book7);
	books.push_back(book8);
	books.push_back(book9);
	books.push_back(book10);
	books.push_back(book11);
	books.push_back(book12);
	books.push_back(book13);
	books.push_back(book14);
	books.push_back(book15);
	books.push_back(book16);
	books.push_back(book17);
	books.push_back(book18);
	books.push_back(book19);
	books.push_back(book20);
	books.push_back(book21);
	books.push_back(book22);
	books.push_back(book23);
	books.push_back(book24);
	books.push_back(book25);
	books.push_back(book26);
	books.push_back(book27);
	books.push_back(book28);
	books.push_back(book29);
	books.push_back(book30);
	books.push_back(book31);
	books.push_back(book32);
	books.push_back(book33);
	books.push_back(book34);
	books.push_back(book35);
	books.push_back(book36);
	books.push_back(book37);
	books.push_back(book38);
	books.push_back(book39);
	books.push_back(book40);
	books.push_back(book41);
	books.push_back(book42);
	books.push_back(book43);
	books.push_back(book44);
	books.push_back(book45);
	books.push_back(book46);
	books.push_back(book47);
	books.push_back(book48);
	books.push_back(book49);
	books.push_back(book50);
	return books;
}

const std::vector<User> Handler::fill_users_database() 
{
	std::vector<Book> books = this->fill_books_database();

	std::vector<User> users{};
	User user1(SEX::FEMALE, 15, "Alexandra Popova", "Sofia");
	User user2(SEX::FEMALE, 17, "Klara Devin", "Rome");
	User user3(SEX::FEMALE, 20, "Sara Roger", "Cambridge");
	User user4(SEX::FEMALE, 23, "Emma William", "Brussels");
	User user5(SEX::FEMALE, 25, "Venla Elias", "Helsinki");
	User user6(SEX::FEMALE, 30, "Chiara Lucas", "Milano");
	User user7(SEX::FEMALE, 33, "Magdalena Georgieva", "Plovdiv");
	User user8(SEX::FEMALE, 35, "Lea Maximilian", "Munich");
	User user9(SEX::FEMALE, 39, "Hannah Fabian", "Salzburg");
	User user10(SEX::FEMALE, 40, "Olivia Thomas", "Cardiff");
	User user11(SEX::FEMALE, 41, "Camille Enzo", "France");
	User user12(SEX::FEMALE, 46, "Anna-Marie Albescu", "Bucarest");
	User user13(SEX::FEMALE, 49, "Milica Stankovic", "Belgrade");
	User user14(SEX::FEMALE, 50, "Paula Hernandez", "Madrid");
	User user15(SEX::FEMALE, 56, "Ophelia Alexopoulos", "Athens");
	User user16(SEX::MALE, 14, "Stanimir Petrov", "Sofia");
	User user17(SEX::MALE, 18, "Marco Russo", "Rome");
	User user18(SEX::MALE, 22, "Noah Brown", "Cambridge");
	User user19(SEX::MALE, 26, "Luc Janssens", "Brussels");
	User user20(SEX::MALE, 28, "Mikael Korhonen", "Helsinki");
	User user21(SEX::MALE, 37, "Leonardo Ricci", "Milano");
	User user22(SEX::MALE, 42, "Plamen Popov", "Plovdiv");
	User user23(SEX::MALE, 44, "Andreas Muller", "Munich");
	User user24(SEX::MALE, 45, "Tobias Gruber", "Salzburg");
	User user25(SEX::MALE, 48, "Arthur Evans", "Cardiff");
	User user26(SEX::MALE, 50, "Lyam Richard", "France");
	User user27(SEX::MALE, 52, "Marian Botezatu", "Bucarest");
	User user28(SEX::MALE, 57, "Filip Markovic", "Belgrade");
	User user29(SEX::MALE, 60, "Miguel Garcia", "Madrid");
	User user30(SEX::MALE, 61, "Dimitris Papadopoulos", "Athens");

	//user1
	std::vector<std::string> pref{};
	std::vector<Book> readBooks{};

	pref.push_back("Action");
	pref.push_back("Historical Fiction");

	readBooks.push_back(books[0]);
	readBooks.push_back(books[42]);

	user1.setPreferences(pref);
	user1.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user2
	pref.push_back("Biography");
	pref.push_back("Historical Fiction");
	pref.push_back("Action");

	readBooks.push_back(books[10]);
	readBooks.push_back(books[32]);
	readBooks.push_back(books[38]);

	user2.setPreferences(pref);
	user2.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user3
	pref.push_back("Biography");
	pref.push_back("Action");

	readBooks.push_back(books[0]);
	readBooks.push_back(books[26]);
	readBooks.push_back(books[45]);
	readBooks.push_back(books[48]);

	user3.setPreferences(pref);
	user3.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user4
	pref.push_back("Fantasy");
	pref.push_back("Biography");

	readBooks.push_back(books[3]);
	readBooks.push_back(books[11]);
	readBooks.push_back(books[12]);
	readBooks.push_back(books[13]);

	user4.setPreferences(pref);
	user4.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user5
	pref.push_back("Religion");
	pref.push_back("Historical Fiction");
	pref.push_back("Fantasy");

	readBooks.push_back(books[5]);
	readBooks.push_back(books[21]);
	readBooks.push_back(books[26]);
	readBooks.push_back(books[28]);

	user5.setPreferences(pref);
	user5.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user6
	pref.push_back("Biography");
	pref.push_back("Action");

	readBooks.push_back(books[40]);
	readBooks.push_back(books[41]);
	readBooks.push_back(books[45]);

	user6.setPreferences(pref);
	user6.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user7
	pref.push_back("Action");
	pref.push_back("Religion");

	readBooks.push_back(books[1]);
	readBooks.push_back(books[5]);
	readBooks.push_back(books[6]);
	readBooks.push_back(books[17]);
	readBooks.push_back(books[33]);

	user7.setPreferences(pref);
	user7.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user8
	pref.push_back("Biography");
	pref.push_back("Fantasy");

	readBooks.push_back(books[6]);
	readBooks.push_back(books[25]);
	readBooks.push_back(books[41]);
	readBooks.push_back(books[42]);
	readBooks.push_back(books[47]);

	user8.setPreferences(pref);
	user8.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user9
	pref.push_back("Religion");
	pref.push_back("Action");

	readBooks.push_back(books[20]);
	readBooks.push_back(books[25]);
	readBooks.push_back(books[28]);
	readBooks.push_back(books[43]);
	readBooks.push_back(books[45]);

	user9.setPreferences(pref);
	user9.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user10
	pref.push_back("Fantasy");
	pref.push_back("Historical Fiction");

	readBooks.push_back(books[8]);
	readBooks.push_back(books[11]);
	readBooks.push_back(books[13]);
	readBooks.push_back(books[31]);

	user10.setPreferences(pref);
	user10.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user11
	pref.push_back("Historical Fiction");
	pref.push_back("Action");

	readBooks.push_back(books[4]);
	readBooks.push_back(books[10]);
	readBooks.push_back(books[31]);
	readBooks.push_back(books[36]);

	user11.setPreferences(pref);
	user11.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user12
	pref.push_back("Action");
	pref.push_back("Religion");

	readBooks.push_back(books[2]);
	readBooks.push_back(books[3]);
	readBooks.push_back(books[4]);
	readBooks.push_back(books[35]);
	readBooks.push_back(books[37]);
	readBooks.push_back(books[42]);

	user12.setPreferences(pref);
	user12.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user13
	pref.push_back("Biography");
	pref.push_back("Fantasy");

	readBooks.push_back(books[6]);
	readBooks.push_back(books[33]);
	readBooks.push_back(books[43]);
	readBooks.push_back(books[46]);
	readBooks.push_back(books[48]);

	user13.setPreferences(pref);
	user13.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user14
	pref.push_back("Religion");
	pref.push_back("Biography");

	readBooks.push_back(books[3]);
	readBooks.push_back(books[21]);
	readBooks.push_back(books[28]);

	user14.setPreferences(pref);
	user14.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user15
	pref.push_back("Fantasy");
	pref.push_back("Action");

	readBooks.push_back(books[10]);
	readBooks.push_back(books[11]);

	user15.setPreferences(pref);
	user15.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user16
	pref.push_back("Historical Fiction");
	pref.push_back("Religion");

	readBooks.push_back(books[9]);
	readBooks.push_back(books[32]);
	readBooks.push_back(books[34]);
	readBooks.push_back(books[37]);

	user16.setPreferences(pref);
	user16.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user17
	pref.push_back("Historical Fiction");
	pref.push_back("Fantasy");

	readBooks.push_back(books[0]);
	readBooks.push_back(books[5]);
	readBooks.push_back(books[13]);
	readBooks.push_back(books[36]);
	readBooks.push_back(books[39]);

	user17.setPreferences(pref);
	user17.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user18
	pref.push_back("Biography");
	pref.push_back("Action");

	readBooks.push_back(books[3]);
	readBooks.push_back(books[15]);
	readBooks.push_back(books[34]);
	readBooks.push_back(books[43]);
	readBooks.push_back(books[46]);

	user18.setPreferences(pref);
	user18.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user19
	pref.push_back("Action");
	pref.push_back("Religion");

	readBooks.push_back(books[1]);
	readBooks.push_back(books[4]);
	readBooks.push_back(books[7]);
	readBooks.push_back(books[16]);
	readBooks.push_back(books[22]);
	readBooks.push_back(books[46]);

	user19.setPreferences(pref);
	user19.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user20
	pref.push_back("Fantasy");
	pref.push_back("Biography");

	readBooks.push_back(books[9]);
	readBooks.push_back(books[12]);
	readBooks.push_back(books[14]);

	user20.setPreferences(pref);
	user20.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user21
	pref.push_back("Religion");
	pref.push_back("Historical Fiction");

	readBooks.push_back(books[23]);
	readBooks.push_back(books[27]);
	readBooks.push_back(books[45]);
	readBooks.push_back(books[47]);

	user21.setPreferences(pref);
	user21.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user22
	pref.push_back("Historical Fiction");
	pref.push_back("Action");

	readBooks.push_back(books[6]);
	readBooks.push_back(books[35]);
	readBooks.push_back(books[36]);

	user22.setPreferences(pref);
	user22.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user23
	pref.push_back("Biography");
	pref.push_back("Fantasy");

	readBooks.push_back(books[0]);
	readBooks.push_back(books[41]);
	readBooks.push_back(books[43]);

	user23.setPreferences(pref);
	user23.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user24
	pref.push_back("Action");
	pref.push_back("Religion");

	readBooks.push_back(books[2]);
	readBooks.push_back(books[3]);
	readBooks.push_back(books[15]);
	readBooks.push_back(books[46]);

	user24.setPreferences(pref);
	user24.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user25
	pref.push_back("Action");
	pref.push_back("Historical Fiction");

	readBooks.push_back(books[3]);
	readBooks.push_back(books[5]);
	readBooks.push_back(books[9]);
	readBooks.push_back(books[45]);

	user25.setPreferences(pref);
	user25.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user26
	pref.push_back("Fantasy");
	pref.push_back("Historical Fiction");

	readBooks.push_back(books[9]);
	readBooks.push_back(books[11]);
	readBooks.push_back(books[13]);
	readBooks.push_back(books[31]);

	user26.setPreferences(pref);
	user26.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user27
	pref.push_back("Biography");
	pref.push_back("Action");

	readBooks.push_back(books[9]);
	readBooks.push_back(books[18]);
	readBooks.push_back(books[42]);
	readBooks.push_back(books[45]);

	user27.setPreferences(pref);
	user27.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user28
	pref.push_back("Historical Fiction");
	pref.push_back("Fantasy");

	readBooks.push_back(books[11]);
	readBooks.push_back(books[32]);
	readBooks.push_back(books[36]);
	readBooks.push_back(books[38]);

	user28.setPreferences(pref);
	user28.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user29
	pref.push_back("Religion");
	pref.push_back("Action");

	readBooks.push_back(books[1]);
	readBooks.push_back(books[24]);
	readBooks.push_back(books[25]);
	readBooks.push_back(books[47]);

	user29.setPreferences(pref);
	user29.setBooks(readBooks);
	pref.clear();
	readBooks.clear();

	//user30
	pref.push_back("Biography");
	pref.push_back("Fantasy");

	readBooks.push_back(books[4]);
	readBooks.push_back(books[42]);
	readBooks.push_back(books[43]);
	readBooks.push_back(books[45]);

	user30.setPreferences(pref);
	user30.setBooks(readBooks);
	pref.clear();
	readBooks.clear();


	users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);
	users.push_back(user4);
	users.push_back(user5);
	users.push_back(user6);
	users.push_back(user7);
	users.push_back(user8);
	users.push_back(user9);
	users.push_back(user10);
	users.push_back(user11);
	users.push_back(user12);
	users.push_back(user13);
	users.push_back(user14);
	users.push_back(user15);
	users.push_back(user16);
	users.push_back(user17);
	users.push_back(user18);
	users.push_back(user19);
	users.push_back(user20);
	users.push_back(user21);
	users.push_back(user22);
	users.push_back(user23);
	users.push_back(user24);
	users.push_back(user25);
	users.push_back(user26);
	users.push_back(user27);
	users.push_back(user28);
	users.push_back(user29);
	users.push_back(user30);
	return users;
}

void Handler::print(std::vector<Book>& recommendations) 
{
	std::cout << "=============================================================================\n";
	size_t size = recommendations.size();
	for (size_t i = 0; i < size; i++) 
	{
		std::cout << recommendations[i] << std::endl;
	}

	std::cout << std::endl;
	recommendations.clear();
	std::cout << "=============================================================================\n";
}

void Handler::input_preferences(User& client)
{
	std::string gender{};
	size_t age{};
	std::string name{};
	std::string location{};
	std::vector<std::string> prefers{};
	size_t year{};
	double rating{};
	std::string author{};
	std::string publisher{};
	std::string genre{};
	std::cout << "Input User Data:\n";
	std::cout << "Gender: ";
	std::getline(std::cin, gender);

	std::cout << "Age: ";
	std::cin >> age;
	std::cin.ignore();
	while (age <= 0 || age > 100)
	{
		std::cout << "\n>>>[Error]: Value of age is not correct. Try again:";
		std::cin >> age;
		std::cin.ignore();
	}

	std::cout << "Name: ";
	std::getline(std::cin, name);

	std::cout << "Location: ";
	std::getline(std::cin, location);

	std::cout << "Preferences:\n";
	std::cout << "Year: ";
	std::cin >> year;
	std::cin.ignore();
	while (year < 1000 || year > 2023)
	{
		std::cout << "\n>>>[Error]: Value of year is not correct. Try again:";
		std::cin >> year;
		std::cin.ignore();
	}

	std::cout << "Rating: ";
	std::cin >> rating;
	std::cin.ignore();
	while (rating < 0 || rating > 5)
	{
		std::cout << "\n>>>[Error]: Value of rating is not correct. Try again:";
		std::cin >> rating;
		std::cin.ignore();
	}

	std::cout << "Author: ";
	std::getline(std::cin, author);

	std::cout << "Publishing House: ";
	std::getline(std::cin, publisher);

	std::cout << "Genre: ";
	std::getline(std::cin, genre);

	prefers.push_back(std::to_string(year));
	prefers.push_back(std::to_string(rating));
	prefers.push_back(author);
	prefers.push_back(publisher);
	prefers.push_back(genre);

	SEX sex = SEX::FEMALE;
	if (gender == "Male" || gender == "male")
	{
		sex = SEX::MALE;
	}

	/// Fill client with fixed data which came from console
	client.setSex(sex);
	client.setAge(age);
	client.setName(name);
	client.setLocation(location);
	client.setPreferences(prefers);
	client.setBooks(std::vector<Book>());
}

void Handler::run() 
{
	/// Fill database for users and books
	std::vector<Book> books = this->fill_books_database();
	std::vector<User> users = this->fill_users_database();
	User client{};
	this->input_preferences(client);
	std::string choice{};
	std::vector<Book> recommendation{};

	do
	{
		std::cout << "According to what would you like your book recommendations?\n";
		std::cout << "- Year\n";
		std::cout << "- Rating\n";
		std::cout << "- Author\n";
		std::cout << "- Publisher\n";
		std::cout << "- Genre\n";
		std::cout << "- Age\n";
		std::cout << "- Location\n";
		std::cout << "- All\n";
		std::cout << "Type Exit or exit to stop the program.\n";
		std::cout << "Type New or new to input new client information.\n";
		std::cout << "Criteria: ";
		std::getline(std::cin, choice);

		if (choice == "Year" || choice == "year")
		{
			if (client.getPreferenceAt(0) == "")
			{
				std::cout << "You have not entered an year!\n";
				continue;
			}

			algorithms::generateRecommendationByYear(client, books, recommendation);
			this->print(recommendation);
		}
		else
			if (choice == "Rating" || choice == "rating")
			{
				if (client.getPreferenceAt(1) == "")
				{
					std::cout << "You have not entered a rating!\n";
					continue;
				}

				algorithms::generateRecommendationByRating(client, books, recommendation);
				this->print(recommendation);
			}
			else
				if (choice == "Author" || choice == "author")
				{
					if (client.getPreferenceAt(2) == "")
					{
						std::cout << "You have not entered an author!\n";
						continue;
					}

					algorithms::generateRecommendationByAuthor(client, books, recommendation);
					this->print(recommendation);
				}
				else
					if (choice == "Publisher" || choice == "publisher")
					{
						if (client.getPreferenceAt(3) == "")
						{
							std::cout << "You have not entered a title!\n";
							continue;
						}

						algorithms::generateRecommendationByPublishingHouse(client, books, recommendation);
						this->print(recommendation);
					}
					else
						if (choice == "Genre" || choice == "genre")
						{
							if (client.getPreferenceAt(4) == "")
							{
								std::cout << "You have not entered a genre!\n";
								continue;
							}

							algorithms::generateRecommendationByGenre(client, books, recommendation);
							this->print(recommendation);
						}
						else
							if (choice == "Age" || choice == "age")
							{
								algorithms::generateRecommendationByAge(client, users, recommendation);
								this->print(recommendation);
							}
							else
								if (choice == "Location" || choice == "location")
								{
									algorithms::generateRecommendationByLocation(client, users, recommendation);
									this->print(recommendation);
								}
								else
									if (choice == "All" || choice == "all")
									{
										algorithms::generateRecommendationByPreferences(client, books, recommendation);
										this->print(recommendation);
									}
									else
										if (choice == "New" || choice == "new")
										{
											this->input_preferences(client);
											recommendation.clear();
										}
										else
										if (choice != "Exit" && choice != "exit")
										{
											std::cout << "Invalid Input!\n";
										}

	} while (choice != "Exit" && choice != "exit");

}
