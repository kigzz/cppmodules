/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:44:57 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 14:44:58 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat *zoro = new Bureaucrat("Zoro", 2);
	try {
		std::cout << "1: " << *zoro << std::endl;
		zoro->increment();
		std::cout << "2: " << *zoro << std::endl;
		zoro->increment();
		std::cout << "3: " << *zoro << std::endl;
		zoro->increment();
		std::cout << "4: " << *zoro << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete zoro;
	std::cout << std::endl;

	Bureaucrat *sanji = new Bureaucrat("Sanji", 10);
	try {
		std::cout << "1: " << *sanji << std::endl;
		sanji->increment(6);
		std::cout << "2: " << *sanji << std::endl;
		sanji->increment();
		std::cout << "3: " << *sanji << std::endl;
		sanji->increment();
		std::cout << "4: " << *sanji << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete sanji;

	std::cout << std::endl;

	Bureaucrat *luffy = new Bureaucrat("Luffy", 145);
	try {
		std::cout << "1: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "2: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "3: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "4: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "5: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "6: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "7: " << *luffy << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete luffy;

	std::cout << std::endl;
	std::cout << "***** EXCEPTION *****" << std::endl;
	std::cout << std::endl;

	std::cout << "Try1: Bureaucrate Nami, grade 151" << std::endl;
	try {
		Bureaucrat nami("Nami", 151);
		std::cout << "HELLO WORLD!!!" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Try2: Bureaucrate Chopper, grade -1" << std::endl;

	try {
		Bureaucrat chopper("Chopper", -1);
		std::cout << "HELLO WORLD!!!" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
