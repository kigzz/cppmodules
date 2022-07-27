/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:42:58 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 19:42:58 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("Presidential Pardon", "none", 25, 5) {
	std::cout << "Default Presidential Pardon Form created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	Form("Presidential Pardon", target, 25 ,5) {
	std::cout << "Presidential Pardon Form created. Target: " << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) :
	Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecuteGrade()) {
	*this = copy;
	std::cout << "Presidential Pardon Form copy created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Presidential Pardon Form destroyed" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	std::cout << "Presidential Pardon Form assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

void PresidentialPardonForm::executeAction() const {
	std::cout << this->getTarget() << " has been been pardoned by Zaphod Beeblebrox" << std::endl;
}
