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