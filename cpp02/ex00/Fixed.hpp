#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed& copy);
	~Fixed();

	Fixed& operator=(const Fixed& copy);

	int getRawBits() const;
	void setRawBits(int const raw);

private:
	int _rawBits;
	static const int _nFracBits = 8;
};


#endif