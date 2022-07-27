#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
	*this = copy;
	std::cout << this->_name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " ClapTrap destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " = " << other._name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		std::cout << this->_name << " ClapTrap attacks " << target << " dealing " << this->_attackDamage
		<< " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << this->_name << " ClapTrap can't attack " << target
		<< " because he has no energy points left" << std::endl;
	else
		std::cout << this->_name << " ClapTrap can't attack " << target
		<< " because he has no hit points left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ClapTrap can't take " << amount
		<< " points of damage because he has no hit points left" << std::endl;
	}
	else if (amount > this->_hitPoints) {
		this->_hitPoints = 0;
		std::cout << this->_name << " ClapTrap has taken " << amount
		<< " points of damage and died." << std::endl;
	}
	else {
		this->_hitPoints -= amount;
		std::cout << this->_name << " ClapTrap has taken " << amount
		<< " points of damage (" << this->_hitPoints << " HP left)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_energyPoints > 0) {
		this->_hitPoints += amount;
		std::cout << this->_name << " ClapTrap has repaired " << amount << " hit points ("
		<< this->_hitPoints << " HP left)" << std::endl;
		this->_energyPoints--;
	}
	if (this->_hitPoints == 0)
		std::cout << this->_name << " ClapTrap can't be repaired because he has no hit points left" << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << this->_name << " ClapTrap can't be repaired because he has no energy points left" << std::endl;
}