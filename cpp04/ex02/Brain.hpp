/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:14:23 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:14:23 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();

	Brain& operator=(const Brain& other);
	std::string getIdea(size_t i) const;
	void setIdea(size_t i, std::string idea);

private:
	std::string ideas[100];
};

#endif
