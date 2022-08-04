/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 03:08:28 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/30 03:08:29 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main()
{
	std::cout << "========== MUTANT STACK ==========" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5); // 5
	mstack.push(17); // 17, 5
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop(); // 5
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3); // 3, 5
	mstack.push(7); // 7, 3, 5
	mstack.push(737); // 737, 7, 3, 5
	mstack.push(0); // 0, 737, 7, 3, 5
	std::cout << "Size: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "\nITERATE STACK:\n" << std::endl;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "========== LIST ==========" << std::endl;

	std::list<int> ls;
	ls.push_back(5);
	ls.push_back(17);
	std::cout << "Back: " << ls.back() << std::endl;
	ls.pop_back();
	std::cout << "Size: " << ls.size() << std::endl;
	ls.push_back(3);
	ls.push_back(7);
	ls.push_back(737);
	ls.push_back(0);
	std::cout << "Size: " << ls.size() << std::endl;
	std::list<int>::iterator lit = ls.begin();
	std::list<int>::iterator lite = ls.end();
	++lit;
	--lit;
	std::cout << "\nITERATE LIST:\n" << std::endl;
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> ls2(ls);
	return 0;
}