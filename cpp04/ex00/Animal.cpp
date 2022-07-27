/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:09 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:17 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;

	std::cout << "Animal copy constructor" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
	this->_type = other._type;

	std::cout << "Animal: assignment operator" << std::endl;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "** Animal generic noise **" << std::endl;
}

const std::string& Animal::getType() const {
	return this->_type;
}
