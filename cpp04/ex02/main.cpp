/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:04:44 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 12:04:44 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define N_ANIMALS 10

int main() {
	std::cout << "==================   BASIC TEST   ==================\n" << std::endl;

	Dog *dog = new Dog();
	Cat *cat = new Cat();
//	Animal *animal = new Animal();

	std::cout << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
//	std::cout << animal->getType() << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
//	animal->makeSound();

	std::cout << std::endl;

	// TEST DEEP COPY
	std::cout << "================== TEST DEEP COPY ==================\n" << std::endl;

	cat->setIdea(0, "I like potatoes");
	cat->setIdea(1, "I like ice cream");
//	dog->setIdea(0, "I like potatoes");
//	dog->setIdea(1, "I like ice cream");

	std::cout << "Cat ideas:" << std::endl;
	cat->getIdea();
//	dog->getIdea();
	std::cout << std::endl;

	std::cout << "Create cat2" << std::endl;
	Cat *cat2 = new Cat();
//	Cat *cat2 = new Cat(*cat);
//	Dog *dog2 = new Dog();
//	Dog *dog2 = new Dog(*dog);
	std::cout << std::endl;
//
	std::cout << "Cat2 ideas:" << std::endl;
	cat2->getIdea();
//	dog2->getIdea();
	std::cout << std::endl;

	std::cout << "Cat2 = Cat:" << std::endl;
	*cat2 = *cat;
//	*dog2 = *dog;
	std::cout << std::endl;

	std::cout << "Cat ideas:" << std::endl;
	cat->getIdea();
//	dog->getIdea();
	std::cout << std::endl;

	std::cout << "Cat2 ideas:" << std::endl;
	cat2->getIdea();
//	dog2->getIdea();
	std::cout << std::endl;

	std::cout << "Cat ideas (now he hates ice cream):" << std::endl;
	cat->setIdea(1, "I hate ice cream");
//	dog->setIdea(1, "I hate ice cream");
	cat->getIdea();
//	dog->getIdea();
	std::cout << std::endl;

	std::cout << "Cat2 ideas:" << std::endl;
	cat2->getIdea();
//	dog2->getIdea();
	std::cout << std::endl;

	std::cout << "==================   CLEAN ALL    ==================\n" << std::endl;

	delete dog;
	delete cat;
	delete cat2;
//	delete dog2;
//	delete animal;

	std::cout << std::endl;

	std::cout << "================ SUBJECT ARRAY TEST ================\n" << std::endl;

	Animal *animals[N_ANIMALS];

	for (int i = 0; i < N_ANIMALS; i++) {
		if (i < N_ANIMALS / 2) {
			animals[i] = new Cat();
		} else {
			animals[i] = new Dog();
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < N_ANIMALS; i++) {
		delete animals[i];
	}
}