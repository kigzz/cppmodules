/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:03:07 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:03:08 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
