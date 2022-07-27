/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:47:48 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 23:47:49 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern default constructed" << std::endl;
}

Intern::Intern(const Intern &copy) {
	std::cout << "Intern copy constructed" << std::endl;
	*this = copy;
}

Intern::~Intern() {
	std::cout << "Intern destroyed" << std::endl;
}

Intern& Intern::operator=(const Intern &other) {
	std::cout << "Intern assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

Form* Intern::makeForm(std::string name, std::string target) {
	static const int kNForms = 3;
	t_forms forms[kNForms] = {
			{ "shrubbery creation", new ShrubberyCreationForm(target) },
			{ "robotomy request", new RobotomyRequestForm(target) },
			{ "presidential pardon", new PresidentialPardonForm(target) }
	};
	Form* ret = NULL;
	for (int i = 0; i < kNForms; i++) {
		if (forms[i]._name == name)
			ret = forms[i]._formClass;
		else
			delete forms[i]._formClass;
	}
	if (ret != NULL)
		std::cout << "Intern creates form " << name << std::endl;
	else
		std::cout << "Intern was not able to find the form " << name << std::endl;
	return ret;
}
