#include "Fixed.hpp"

//Constructor

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (value << Fixed::_nFracBits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_nFracBits));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//Operators
Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return *this;
}

//Public Methods
int Fixed::toInt() const {
	return this->_rawBits >> Fixed::_nFracBits;
}

float Fixed::toFloat() const {
	return ((float)this->_rawBits / (float)(1 << Fixed::_nFracBits));
}

//Setter
void Fixed::setRawBits(const int raw) {
//	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

//Getter
int Fixed::getRawBits() const {
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed& obj) {
	out << obj.toFloat();
	return out;
}