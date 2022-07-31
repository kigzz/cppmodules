/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:26 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:27 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->_type = "Cat";

	std::cout << "Cat: default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	*this = copy;

	std::cout << "Cat: copy constructor" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat: destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this == &other)
		return *this;
	this->_type = other._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "** Meow! Meow! Meow! **" << std::endl;
}
