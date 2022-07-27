/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:05:30 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:05:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->_type = "Cat";

	std::cout << "WrongCat: default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	*this = copy;

	std::cout << "WrongCat: copy constructor" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat: destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "** Meow! Meow! Meow! **" << std::endl;
}
