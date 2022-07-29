/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:08:37 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 03:08:38 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>

Base* generate() {
	std::srand(time(NULL));

	int n = rand() % 3;
	switch (n) {
		case 0:
			std::cout << "generated an A class" << std::endl;
			return new A;
		case 1:
			std::cout << "generated an B class" << std::endl;
			return new B;
		case 2:
			std::cout << "generated an C class" << std::endl;
			return new C;
	}

	std::cout << "some very weird error ocurred: can't generate a class" << std::endl;
	return NULL;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A class was identified" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B class was identified" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C class was identified" << std::endl;
	}
	else {
		std::cout << "Can't identify the class" << std::endl;
	}
}

void identify(Base& p) {
	try {
		A& aux = dynamic_cast<A&>(p);
		(void)aux;
		std::cout << "A class was identified" << std::endl;
		return;
	}
	catch (...) {
	}

	try {
		B& aux = dynamic_cast<B&>(p);
		(void)aux;
		std::cout << "B class was identified" << std::endl;
		return;
	}
	catch (...) {
	}

	try {
		C& aux = dynamic_cast<C&>(p);
		(void)aux;
		std::cout << "C class was identified" << std::endl;
		return;
	}
	catch (...) {
	}

	std::cout << "Can't identify the class" << std::endl;
}

int main() {
	Base *base;

	std::cout << "****** GENERATING RANDOM BASE ******" << std::endl;
	base = generate();
	std::cout << "****** POINTER IDENTIFY ******" << std::endl;
	identify(base); // pointer
	std::cout << "****** REFERENCE IDENTIFY ******" << std::endl;
	identify(*base); // reference

	delete base;

	return 0;
}
