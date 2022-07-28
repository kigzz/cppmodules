/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:15:46 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/28 03:15:46 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void convert(const char *input)
{
	Conversion myConversion(input);

	myConversion.printChar();
	myConversion.printInt();
	myConversion.printFloat();
	myConversion.printDouble();
}

int main(int argc, char *argv[])
{
	if (argc != 2) {
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	else
		convert(argv[1]);
	return (0);
}
