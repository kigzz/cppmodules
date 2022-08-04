/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 03:08:12 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/30 03:08:13 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main() {

	std::cout << "=========== VECTOR ===========\n" << std::endl;
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; i++) {
		v.push_back(i * i);
	}
	std::cout << "Vector : " << std::endl;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); i++) {
		std::cout << *i << std::endl;
	}

	std::cout << std::endl;
	it = easyfind(v, -3);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Iterator: " << *it << std::endl;

	std::cout << std::endl;
	it = easyfind(v, 2);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Iterator: " << *it << std::endl;

	std::cout << std::endl;
	it = easyfind(v, 25);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Iterator: " << *it << std::endl;

	std::cout << std::endl;
	it = easyfind(v, 81);
	if (it == v.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Iterator: " << *it << std::endl;

	std::cout << "\n=========== LIST ===========\n" << std::endl;

	std::list<int> l1;
	std::list<int>::iterator lit;

	for (int i = 0; i < 10; i++) {
		l1.push_back(i * i);
	}
	std::cout << "List : " << std::endl;
	for (std::list<int>::iterator i = l1.begin(); i != l1.end(); i++) {
		std::cout << *i << std::endl;
	}
	std::cout << std::endl;

	lit = easyfind(l1, 81);
	if (lit == l1.end())
		std::cout << "Not found" << std::endl;
	else
		std::cout << "Iterator: " << *lit << std::endl;
	return 0;
}