/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:33:10 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/28 02:33:11 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void) {
}

Conversion::Conversion(const char *input) {
	this->value = std::atof(input);
}

Conversion::Conversion(const Conversion &copy) {
	*this = copy;
}

Conversion::~Conversion() {
}

Conversion &Conversion::operator = (const Conversion &other) {
	this->value = other.value;
	return *this;
}

void Conversion::printChar() {
	if (!(this->value >= CHAR_MIN && this->value <= CHAR_MAX))
		std::cout << "char: impossible" << std::endl;
	else if (!(this->value >= MIN_DISPLAY && this->value <= MAX_DISPLAY))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->value) << "'" << std::endl;
}

void Conversion::printInt() {
	if (this->value <= INT_MAX && this->value >= INT_MIN)
		std::cout << "int: " << static_cast<int>(this->value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void Conversion::printFloat() {
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->value) << "f" << std::endl;
}

void Conversion::printDouble() {
	std::cout << "double: " << std::fixed << std::setprecision(1) << this->value << std::endl;
}
