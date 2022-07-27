#include "PhoneBook.hpp"

int main() {
	std::string line;
	PhoneBook *phoneBook = new PhoneBook();

	while (std::cout << "$> ", std::getline(std::cin, line)) {
		if (line == "SEARCH")
			phoneBook->searchContact();
		else if (line == "ADD")
			phoneBook->addContact();
		else if (line == "EXIT") {
			std::cout << "exit" << std::endl;
			break;
		}
		else if (std::cin.eof())
			break;
		std::cin.clear();
	}
	std::cin.clear();

	delete phoneBook;
	return 0;
}