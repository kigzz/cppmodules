/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:43:06 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 19:43:06 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
		: Form("Robotomy request", "none", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
		: Form("Robotomy request", target, 72, 45) {
	std::cout << "Robotomy Request Form created. Target: " << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
		: Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecuteGrade()) {
	*this = copy;
	std::cout << "Robotomy Request Form copy created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Robotomy Request Form destroyed" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "Robotomy Request Form assignment operator" << std::endl;
	if (this == &other) return *this;
	return *this;
}

void RobotomyRequestForm::executeAction() const {
	// use current time as seed for random generator
	std::srand(std::time(NULL));

	std::cout << "** SOME DRILLING NOISES **" << std::endl;
	if (std::rand() % 2 == 0) {
		std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
	}
	else {
		std::cout << "Failed to robotomized " << this->getTarget() << std::endl;
	}
}
