/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:31 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:31 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& copy);
	virtual ~Cat();

	Cat& operator=(const Cat& other);

	void makeSound() const;
	Brain *getBrain() const;

	void getIdea() const;
	void setIdea(size_t i, std::string idea) const;

private:
	Brain *_brain;
};

#endif
