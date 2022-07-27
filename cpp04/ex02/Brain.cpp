/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:14:19 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:14:20 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: default constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {
	*this = copy;

	std::cout << "Brain: copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain: destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &other) {
	for (int i = 0; i < Brain::nIdeas; i++) {
		this->ideas[i] = other.ideas[i];
	}

	std::cout << "Brain: assignment operator" << std::endl;
	return *this;
}