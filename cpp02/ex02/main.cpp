/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:10:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:10:23 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << "a = " << a << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "a = " << a << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "a = " << a << std::endl;

		std::cout << "b = " << b << std::endl;

		std::cout << "max(a, b) = " << Fixed::max( a, b ) << std::endl;
	}
	// MY TESTS
	{
		std::cout << "\nMY TESTS:\n" << std::endl;

		Fixed a(4);
		Fixed const b(2);

		std::cout << "a: " << a << std::endl;
		std::cout << "b: " << b << std::endl;

		std::cout << "a++: " << a++ << std::endl;
		std::cout << "a: " << a << std::endl;
		std::cout << "++a: " << ++a << std::endl;
		std::cout << "a: " << a << std::endl;

		std::cout << "a + b: " << a + b << std::endl;
		std::cout << "b + a: " << b + a << std::endl;

		std::cout << "a - b: " << a - b << std::endl;
		std::cout << "b - a: " << b - a << std::endl;

		std::cout << "a * b: " << a * b << std::endl;
		std::cout << "b * a: " << b * a << std::endl;

		std::cout << "a / b: " << a / b << std::endl;
		std::cout << "b / a: " << b / a << std::endl;

		std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
		std::cout << "max(b, a): " << Fixed::max(a, b) << std::endl;

		std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
		std::cout << "min(b, a): " << Fixed::min(a, b) << std::endl;

		return 0;
	}
}
