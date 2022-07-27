/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:18 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:05:19 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal") {
	std::cout << "WrongAnimal: default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;

	std::cout << "WrongAnimal: copy constructor" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal: destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	this->_type = other._type;

	std::cout << "WrongAnimal: assignment operator" << std::endl;

	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "** Animal generic sound **" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return this->_type;
}
