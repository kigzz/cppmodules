#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& copy);
	~Fixed();

	Fixed& operator=(const Fixed& copy);

	bool operator>(const Fixed& copy) const;
	bool operator<(const Fixed& copy) const;
	bool operator>=(const Fixed& copy) const;
	bool operator<=(const Fixed& copy) const;
	bool operator==(const Fixed& copy) const;
	bool operator!=(const Fixed& copy) const;

	Fixed operator+(const Fixed& copy) const;
	Fixed operator-(const Fixed& copy) const;
	Fixed operator*(const Fixed& copy) const;
	Fixed operator/(const Fixed& copy) const;

	Fixed operator++();
	Fixed operator--();

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed& min(Fixed& ref1, Fixed& ref2);
	static Fixed& max(Fixed& ref1, Fixed& ref2);
	static const Fixed& min(const Fixed& ref1, const Fixed& ref2);
	static const Fixed& max(const Fixed& ref1, const Fixed& ref2);

	int getRawBits() const;
	void setRawBits(int const raw);

	int toInt() const;
	float toFloat() const;

private:
	int _rawBits;
	static const int _nFracBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed& myClass);

#endif