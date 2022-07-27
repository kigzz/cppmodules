/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:04:22 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:04:23 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int size;
	Zombie *horde;

	size = 4;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_01");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 2;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_02");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 0;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_03");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = -1;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_04");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;

	return 0;
}
