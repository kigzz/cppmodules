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
	std::cout << "\nITERATE COPY STACK:\n" << std::endl;

	MutantStack<int> s1(mstack);
	it = s1.begin();
	ite = s1.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\n========== LIST ==========\n" << std::endl;

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

	std::cout << "\n========== VECTOR ==========\n" << std::endl;
	std::vector<int> v1;
	v1.push_back(5);
	v1.push_back(17);
	std::cout << "Back: " << v1.back() << std::endl;
	v1.pop_back();
	std::cout << "Size: " << v1.size() << std::endl;
	v1.push_back(3);
	v1.push_back(7);
	v1.push_back(737);
	v1.push_back(0);
	std::cout << "Size: " << ls.size() << std::endl;
	std::vector<int>::iterator vit = v1.begin();
	std::vector<int>::iterator vite = v1.end();
	++vit;
	--vit;
	std::cout << "\nITERATE VECTOR:\n" << std::endl;
	while (vit != vite) {
		std::cout << *vit << std::endl;
		++vit;
	}
	std::vector<int> v2(v1);

	std::cout << "\n========== DEQUE ==========\n" << std::endl;
	std::deque<int> deq1;
	deq1.push_back(5);
	deq1.push_back(17);
	std::cout << "Back: " << deq1.back() << std::endl;
	deq1.pop_back();
	std::cout << "Size: " << deq1.size() << std::endl;
	deq1.push_back(3);
	deq1.push_back(7);
	deq1.push_back(737);
	deq1.push_back(0);
	std::cout << "Size: " << ls.size() << std::endl;
	std::deque<int>::iterator deqit = deq1.begin();
	std::deque<int>::iterator deqite = deq1.end();
	++deqit;
	--deqit;
	std::cout << "\nITERATE DOUBLE ENTRY QUEUE:\n" << std::endl;
	while (deqit != deqite) {
		std::cout << *deqit << std::endl;
		++deqit;
	}
	std::deque<int> deq2(deq1);

	return 0;
}