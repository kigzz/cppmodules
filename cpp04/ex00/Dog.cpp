/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:35 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:36 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";

	std::cout << "Dog: default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	*this = copy;

	std::cout << "Dog: copy constructor" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog: destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this == &other)
		return *this;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "** Woof! Woof! Woof! **" << std::endl;
}
