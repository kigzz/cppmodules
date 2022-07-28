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

// Includes
#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <iomanip>

#define NAN_INF 1
#define ERROR 2
#define CHAR 3
#define INT 4
#define FLOAT 5
#define DOUBLE 6

class Conversion
{
public:
	Conversion(const std::string input);
	Conversion(const Conversion &src);

	~Conversion();

	Conversion &operator=(const Conversion &src);

	class ErrorException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	const std::string _input;
	int _type;
	char _char;
	int _int;
	float _float;
	double _double;

	Conversion();

	int checkInput(void);
	void convertInput(void);

	void fromChar(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);

	void printOutput(void)const;

	std::string getInput(void)const;
	int getType(void)const;
	char getChar(void)const;
	int getInt(void)const;
	float getFloat(void)const;
	double getDouble(void)const;
};

#endif
