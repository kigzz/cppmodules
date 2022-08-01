/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:18:06 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 17:18:07 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void checkGradeForm(int grade) {
	if (grade < Bureaucrat::maxGrade)
		throw Form::GradeTooHighException();
	if (grade > Bureaucrat::minGrade)
		throw Form::GradeTooLowException();
}

Form::Form() : _signed(false), _name("Form"), _target("none"), _signGrade(150), _executeGrade(150) {
	std::cout << "Form default constructor" << std::endl;
}

Form::Form(const std::string &name, const std::string &target, int signGrade, int executeGrade)
		: _signed(false), _name(name), _target(target), _signGrade(signGrade), _executeGrade(executeGrade) {
	checkGradeForm(signGrade);
	checkGradeForm(executeGrade);
	std::cout << "Form created" << std::endl;
}

Form::Form(const Form &copy)
	: _signed(copy._signed), _name(copy._name), _target(copy._target),
	_signGrade(copy._signGrade), _executeGrade(copy._executeGrade) {
	std::cout << "Form copy created" << std::endl;
}

Form::~Form() {
	std::cout << "Form destroyed" << std::endl;
}

Form& Form::operator=(const Form &other) {
	std::cout << "Assignment operator" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

const std::string& Form::getName() const {
	return this->_name;
}

const std::string& Form::getTarget() const {
	return this->_target;
}

bool Form::getSigned() const {
	return this->_signed;
}

int Form::getSignGrade() const {
	return this->_signGrade;
}

int Form::getExecuteGrade() const {
	return this->_executeGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (this->_signed && bureaucrat.getGrade() <= this->_signGrade) {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because it's already signed" << std::endl;
		return;
	}
	if (bureaucrat.getGrade() <= this->_signGrade && !this->_signed) {
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
	}
	else {
		std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because ";
		throw Bureaucrat::GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "[ Form ]: grade too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "[ Form ]: grade too low";
}

const char* Form::NotSigned::what() const throw() {
	return "[ Form ]: Not signed";
}

std::ostream& operator<<(std::ostream& out, const Form& obj) {
	out << "Form " << obj.getName()
		<< ", status: " << (obj.getSigned() ? "signed" : "not signed")
		<< ", sign grade " << obj.getSignGrade()
		<< ", execute grade " << obj.getExecuteGrade()
		<< std::endl;

	return out;
}
