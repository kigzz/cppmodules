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
	this->_brain = new Brain();

	std::cout << "Dog: default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	this->_brain = new Brain();
	*this = copy;

	std::cout << "Dog: copy constructor" << std::endl;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog: destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "** Woof! Woof! Woof! **" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	this->Animal::operator=(other);

	//this->_brain = other._brain; // shallow copy
	*this->_brain = *other._brain; // deep copy

	std::cout << "Dog: assignment operator" << std::endl;

	return *this;
}

Brain* Dog::getBrain() const {
	return this->_brain;
}