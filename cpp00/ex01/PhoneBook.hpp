#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();

	void addContact();
	void searchContact();

private:
	static const int MAX_CONTACTS = 8;
	int newContactIndex;
	int contactAmount;
	Contact *contacts[MAX_CONTACTS];
};

#endif