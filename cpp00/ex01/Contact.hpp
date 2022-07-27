#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact {
public:
	Contact();
	~Contact();
	int setInformation(int index);
	void	tableDisplay();
	void	fullDisplay();

private:
	static const int FIELD_COUNT = 5;
	enum Fields {
		firstName,
		lastName,
		nickName,
		phoneNumber,
		darkestSecret
	};
	int	index;
	std::string fieldsInfo[FIELD_COUNT];
};

bool stringIsalnum (const std::string str);

#endif