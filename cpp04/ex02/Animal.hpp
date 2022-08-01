/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:22 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:22 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
public:
	virtual ~Animal();

	Animal& operator=(const Animal& other);

	virtual void makeSound() const = 0;
	const std::string& getType() const;

protected:
	Animal();
	Animal(const Animal& copy);
	std::string _type;

private:
};

#endif
