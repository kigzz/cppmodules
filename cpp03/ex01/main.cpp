/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:11:50 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:11:53 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap *c1 = new ClapTrap();
	std::cout << std::endl;

	ScavTrap *c2 = new ScavTrap("Luffy");
	std::cout << std::endl;

	ScavTrap *aux = new ScavTrap();
	std::cout << std::endl;

	ScavTrap *c3 = new ScavTrap(*aux);
	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Mimic");
	c3->attack("Zombie");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(50);
	c2->takeDamage(50);
	c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	delete c1;
	std::cout << std::endl;

	delete c2;
	std::cout << std::endl;

	delete aux;
	std::cout << std::endl;

	delete c3;
	std::cout << std::endl;

}
