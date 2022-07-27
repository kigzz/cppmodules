/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:12:24 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:12:24 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap *c1 = new ScavTrap();

	std::cout << std::endl;

	FragTrap *c2 = new FragTrap("Luffy");

	std::cout << std::endl;

	FragTrap *aux = new FragTrap();

	std::cout << std::endl;

	FragTrap *c3 = new FragTrap(*aux);

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

	c1->guardGate();
	c2->highFivesGuys();
	c3->highFivesGuys();

	std::cout << std::endl;

	delete c1;
	std::cout << std::endl;

	delete c2;
	std::cout << std::endl;

	delete aux;
	std::cout << std::endl;

	delete c3;
}
