/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 02:33:14 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/28 02:33:15 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#define	MIN_DISPLAY 33
#define MAX_DISPLAY 126
#include <iostream>
#include <climits>
#include <iomanip>
#include <cstdlib>

class Conversion
{
public:
	Conversion();
	Conversion(const char *input);
	Conversion(const Conversion &copy);
	~Conversion();

	Conversion &operator = (const Conversion  &other);

	void printChar();
	void printInt();
	void printFloat();
	void printDouble();

private:
	double value;
};

#endif
