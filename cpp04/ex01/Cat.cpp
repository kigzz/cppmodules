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
	this->_brain = new Brain();

	std::cout << "Cat: default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) : Animal(copy) {
	this->_brain = new Brain();
	*this = copy;

	std::cout << "Cat: copy constructor" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat: destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "** Meow! Meow! Meow! **" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {

//	this->_brain = other._brain; // shallow copy
	*this->_brain = *other._brain; // deep copy

	std::cout << "Cat: assignment operator" << std::endl;
	return *this;
}

Brain* Cat::getBrain() const {
	return this->_brain;
}