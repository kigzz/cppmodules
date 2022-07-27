#include "ClapTrap.hpp"

int main() {
	ClapTrap *c1 = new ClapTrap();
	std::cout << std::endl;

	ClapTrap *c2 = new ClapTrap("Luffy");
	std::cout << std::endl;

	ClapTrap *c3 = new ClapTrap(*c1);
	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Mimic");
	c3->attack("Zombie");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c2->takeDamage(5);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}