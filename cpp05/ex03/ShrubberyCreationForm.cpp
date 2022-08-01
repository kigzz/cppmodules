/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:43:13 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 19:43:14 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("Shrubbery creation", "none", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
		: Form("Shrubbery creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form created. Target: " << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
		: Form(copy.getName(), copy.getTarget(), copy.getSignGrade(), copy.getExecuteGrade()) {
	*this = copy;
	std::cout << "Shrubbery Creation Form copy created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destroyed" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "Shrubbery Creation Form assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() >= this->getExecuteGrade()) {
		std::cout << executor.getName() << " can't execute " << this->getName() << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
	if (!this->getSigned()) {
		std::cout << executor.getName() << " can't execute " << this->getName() << " because ";
		throw Form::NotSigned();
	}

	std::cout << executor.getName() << " has executed " << this->getName() << std::endl;
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

	out << std::endl;
	out << "               ,@@@@@@@,                  " << std::endl;
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl;
	out << "    ,&&%&%&&%,@@@@@/@@@@@@,8888|88/8o     " << std::endl;
	out << "   ,%&|%&&%&&%,@@@|@@@/@@@88|88888/88'    " << std::endl;
	out << "   %&&%&%&/%&&%@@|@@/ /@@@88888|88888'    " << std::endl;
	out << "   %&&%/ %&&%&&@@| V /@@' `88|8 `/88'     " << std::endl;
	out << "   `&%| ` /%&'    |.|        | '|8'       " << std::endl;
	out << "       |o|        | |         | |         " << std::endl;
	out << "       |.|        | |         | |         " << std::endl;
	out << "    ||/ ._|//_/__/  ,|_//__||/.  |_//__/_ " << std::endl;

	out.close();
}
