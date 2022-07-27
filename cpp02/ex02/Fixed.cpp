#include "Fixed.hpp"

//Constructor
Fixed::Fixed() : _rawBits(0) {
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
//	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (value << Fixed::_nFracBits);
}

Fixed::Fixed(const float value) {
//	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << Fixed::_nFracBits));
}

Fixed::Fixed(const Fixed& copy) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

//Destructor
Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

//Copy assignment
Fixed& Fixed::operator=(const Fixed& copy) {
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_rawBits = copy.getRawBits();
	return *this;
}

//Comparison operators
bool Fixed::operator>(const Fixed& copy) const {
	return this->_rawBits > copy._rawBits;
}

bool Fixed::operator<(const Fixed& copy) const {
	return this->_rawBits < copy._rawBits;
}

bool Fixed::operator>=(const Fixed& copy) const {
	return this->_rawBits >= copy._rawBits;
}

bool Fixed::operator<=(const Fixed& copy) const {
	return this->_rawBits <= copy._rawBits;
}

bool Fixed::operator==(const Fixed& copy) const {
	return this->_rawBits == copy._rawBits;
}

bool Fixed::operator!=(const Fixed& copy) const {
	return this->_rawBits != copy._rawBits;
}

//Arithmetic operator
Fixed Fixed::operator+(const Fixed& copy) const {
	Fixed result;

	result._rawBits = this->_rawBits + copy._rawBits;
	return result;
}

Fixed Fixed::operator-(const Fixed& copy) const {
	Fixed result;

	result._rawBits = this->_rawBits - copy._rawBits;
	return result;
}

Fixed Fixed::operator*(const Fixed& copy) const {
	Fixed result;

	result = this->toFloat() * copy.toFloat();
	return result;
}

Fixed Fixed::operator/(const Fixed& copy) const {
	Fixed result;

	result = this->toFloat() / copy.toFloat();
	return result;
}

//Pre-increment and pre-decrement operators
Fixed Fixed::operator++() {
	++(this->_rawBits);
	return *this;
}

Fixed Fixed::operator--() {
	--(this->_rawBits);
	return *this;
}

//Post-increment and post decrement operators
Fixed Fixed::operator++(int) {
	Fixed tmp = *this;

	++(this->_rawBits);
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;

	--(this->_rawBits);
	return tmp;
}

//Min and Max
Fixed& Fixed::min(Fixed& ref1, Fixed& ref2) {
	if (ref1 < ref2)
		return ref1;
	else
		return ref2;
}

Fixed &Fixed::max(Fixed& ref1, Fixed& ref2) {
	if (ref1 > ref2)
		return ref1;
	else
		return ref2;
}

const Fixed& Fixed::min(const Fixed& ref1, const Fixed& ref2) {
	if (ref1 < ref2)
		return ref1;
	else
		return ref2;
}

const Fixed& Fixed::max(const Fixed& ref1, const Fixed& ref2) {
	if (ref1 > ref2)
		return ref1;
	else
		return ref2;
}

//Public methods
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

//Ostream operator
std::ostream &operator<<(std::ostream &out, const Fixed& obj) {
	out << obj.toFloat();
	return out;
}