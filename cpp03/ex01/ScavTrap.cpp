/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:11:40 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:11:41 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_name = "Default";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << this->_name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << this->_name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	*this = copy;

	std::cout << this->_name << " ScavTrap copy created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " ScavTrap destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " = " << other._name << " (ScavTrap)" << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << this->_name << " ScavTrap attacks " << target << " dealing " << this->_attackDamage
		<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << this->_name << " ScavTrap can't attack " << target
		<< " because he has no energy points left" << std::endl;
	else
		std::cout << this->_name << " ScavTrap can't attack " << target
		<< " because he has no hit points left" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ScavTrap can't guard gate because he has no hit points left" << std::endl;
		return;
	}

	std::cout << this->_name << " YOU SHALL NOT PASS !" << std::endl;
}
