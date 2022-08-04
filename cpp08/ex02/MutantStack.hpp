/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 03:08:30 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/30 03:08:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <string>
#include <vector>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;

	MutantStack();
	MutantStack(MutantStack const &copy);
	~MutantStack();
	MutantStack &operator = (MutantStack const &other);

	iterator begin() { return this->c.begin(); }
	iterator end() { return this->c.end(); }

	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }

};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() {
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(MutantStack const &copy) : std::stack<T, Container>(copy) {
	*this = copy;
}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(MutantStack const &other) {
	this->c = other.c;
	return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {
}

#endif
