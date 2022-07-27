/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:02:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:02:25 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

bool stringIsalnum(const std::string str) {
	size_t i = 0;
	while (i < str.length()) {
		if (std::isalnum(str[i])) {
			i++;
		}
		else {
			return false;
		}
	}
	return true;
}

int	Contact::setInformation(int index) {
	int id;

	this->index = index;
	id = 0;

	do {
		std::cout << "Add contact: Name (required): ";
		std::getline(std::cin, this->fieldsInfo[id]);

		if (std::cin.eof()) {
			std::cin.clear();
			return 1;
		}
	} while (this->fieldsInfo[id].empty() || !stringIsalnum(this->fieldsInfo[id]));

	std::cout << "Add contact: Last name: ";
	std::getline(std::cin, this->fieldsInfo[++id]);
	if (std::cin.eof()) {
		std::cin.clear();
		return 1;
	}

	std::cout << "Add contact: Nickname: ";
	std::getline(std::cin, this->fieldsInfo[++id]);
	if (std::cin.eof()) {
		std::cin.clear();
		return 1;
	}

	std::cout << "Add contact: Phone number: ";
	std::getline(std::cin, this->fieldsInfo[++id]);
	if (std::cin.eof()) {
		std::cin.clear();
		return 1;
	}

	std::cout << "Add contact: Darkest secret: ";
	std::getline(std::cin, this->fieldsInfo[++id]);
	if (std::cin.eof()) {
		std::cin.clear();
		return 1;
	}

	if (this->fieldsInfo[0].length() == 0) {
		std::cout << "\nError: name is required\n";
		return 1;
	}
	return 0;
}

void	Contact::tableDisplay() {
	std::cout << "|" << std::right << std::setw(10) << this->index;

	for (int i = 0; i < 3; i++) {
		std::cout << "|";
		if (this->fieldsInfo[i].length() > 10) {
			std::cout << this->fieldsInfo->substr(0, 9) << ".";
		}
		else
			std::cout << std::right << std::setw(10) << this->fieldsInfo[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::fullDisplay() {
	int id;

	std::cout << "===== Information of contact #" << this->index << " =====\n\n";
	id = -1;
	std::cout << "# Name:           " << this->fieldsInfo[++id] << std::endl;
	std::cout << "# Last name:      " << this->fieldsInfo[++id] << std::endl;
	std::cout << "# Nickname:       " << this->fieldsInfo[++id] << std::endl;
	std::cout << "# Phone number:   " << this->fieldsInfo[++id] << std::endl;
	std::cout << "# Darkest secret: " << this->fieldsInfo[++id] << std::endl;
}
