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

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::deque<T>::iterator iterator;

	MutantStack();
	MutantStack(MutantStack const &copy);
	~MutantStack();
	MutantStack &operator = (MutantStack const &other);

	iterator begin() {
		return this->c.begin();
	};
	iterator end() {
		return this->c.end();
	};
};

template <typename T>
MutantStack<T>::MutantStack() {
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copy) {
	*this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &other) {
	this->c = other.c;
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

#endif
