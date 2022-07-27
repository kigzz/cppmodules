#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();

	void attack() const;
	void setWeapon(const Weapon &weapon);

private:
	std::string _name;
	Weapon* _weapon;
};


#endif