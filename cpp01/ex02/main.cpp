/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:05:09 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:05:10 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	// initialise vars
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	// address of the string
	std::cout << "\nADDRESS OF THE STRING:\n\n"
			  << "string:    " << &string << '\n'
			  << "stringPTR: " << stringPTR << '\n'
			  << "stringREF: " << &stringREF << '\n';

	// display string content
	std::cout << "\nCONTENT OF THE STRING:\n\n"
			  << "string:    " << string << '\n'
			  << "stringPTR: " << *stringPTR << '\n'
			  << "stringREF: " << stringREF << '\n'
			  << std::endl;

	return 0;
}
