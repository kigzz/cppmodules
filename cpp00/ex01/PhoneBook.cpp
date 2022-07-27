/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:02:58 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:02:59 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->newContactIndex = 0;
	this->contactAmount = 0;
	for (int i = 0; i < MAX_CONTACTS; i++) {
		this->contacts[i] = new Contact;
	}
}

PhoneBook::~PhoneBook() {
	for (int i = 0; i < MAX_CONTACTS; i++) {
		delete this->contacts[i];
	}
}

bool stringIsalpha(const std::string str) {
	size_t i = 0;
	while (i < str.length()) {
		if (std::isalpha(str[i]))
			i++;
		else
			return false;
	}
	return true;
}


void PhoneBook::addContact() {
	if (this->newContactIndex >= this->MAX_CONTACTS)
		this->newContactIndex = 0;

	std::cout << std::endl;
	Contact *tmp = new Contact;
	if (tmp->setInformation(this->newContactIndex + 1) == 0) {
		delete this->contacts[this->newContactIndex];
		this->contacts[this->newContactIndex] = tmp;
		std::cout << "\nNew contact added succesfully" << std::endl;

		this->newContactIndex++;
		if (this->contactAmount < 8)
			this->contactAmount++;
	}
	else
		delete tmp;
	std::cout << std::endl;
	return;
}

void PhoneBook::searchContact() {
	if (this->contactAmount == 0) {
		std::cout << "\nError: no contacts\n" << std::endl;
		return;
	}

	std::cout << "\n"
			  << "|-------------------------------------------|\n"
			  << "|     Index|First Name| Last Name|  Nickname|\n"
			  << "|-------------------------------------------|\n";
	for (int i = 0; i < this->contactAmount; i++)
		this->contacts[i]->tableDisplay();
	std::cout << "|-------------------------------------------|" << std::endl;

	bool run = true;
	int id;
	std::cout << "\nEnter index of a contact to display all information, or type \"EXIT\" to return\n";
	do {
		std::string str;
		std::cout << "Index: ";
		std::getline(std::cin, str);
		if (str == "EXIT" || std::cin.eof()) {
			std::cout << std::endl;
			return;
		}
		else if (stringIsalpha(str)) {
			std::cout << "\nInvalid index: value is not a number" << std::endl;
		}
		else {
			id = std::atoi(str.c_str());
			if (id <= 0 || id > this->contactAmount) {
				std::cout << "\nInvalid index: out of range" << std::endl;
			}
			else
				run = false;
		}
	} while (run);

	std::cout << std::endl;
	this->contacts[id - 1]->fullDisplay();
	std::cout << std::endl;
}
