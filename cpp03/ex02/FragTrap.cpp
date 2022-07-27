/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:12:42 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:12:43 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	*this = copy;

	std::cout << this->_name << " FragTrap copy created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FragTrap destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " FragTrap = " << other._name << std::endl;
	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->_hitPoints > 0)
		std::cout << this->_name << " FragTrap is waiting for a high five.." << std::endl;
	else
		std::cout << this->_name << " FragTrap can't high five because he has no hit points left" << std::endl;
}

