/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:08:17 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:08:19 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
	static const int hLevels = 4;
	int levelN = -1;

	std::string complainLevels[hLevels] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
	};

	void (Harl::*functions[4])() = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	for (int i = 0; i < hLevels; i++) {
		if (complainLevels[i].compare(level) == 0) {
			levelN = i;
			break;
		}
	}

	switch (levelN) {
		case 0:
			(this->*(functions[0]))();
			__attribute__ ((fallthrough));
		case 1:
			(this->*(functions[1]))();
			__attribute__ ((fallthrough));
		case 2:
			(this->*(functions[2]))();
			__attribute__ ((fallthrough));
		case 3:
			(this->*(functions[3]))();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::debug() {
	std::cout
			<< "[ DEBUG ]\n"
			<< "I love to having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
			<< " I really do!"
			<< std::endl;
}

void Harl::info() {
	std::cout
			<< "[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money."
			<< " You didn't put enough in my burger!"
			<< " If you did, I wouldn't be asking for more!"
			<< std::endl;
}

void Harl::warning() {
	std::cout
			<< "[ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free."
			<< " I’ve been coming here for years whereas you started working here since last month."
			<< std::endl;
}

void Harl::error() {
	std::cout
			<< "[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now."
			<< std::endl;
}
