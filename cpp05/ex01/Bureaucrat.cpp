/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:44:48 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 14:44:49 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void checkGrade(int grade) {
	if (grade < Bureaucrat::maxGrade)
		throw Bureaucrat::GradeTooHighException();
	if (grade > Bureaucrat::minGrade)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	checkGrade(grade);
	std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name) {
	*this = copy;
	std::cout << "Copy of bureaucrat created" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << this->_name << " Bureaucrat fired" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	this->_grade = other._grade;

	std::cout << "Assignment operator" << std::endl;
	return *this;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

const std::string& Bureaucrat::getName() const {
	return this->_name;
}

void Bureaucrat::increment() {
	std::cout << "Incrementing grade by 1" << std::endl;
	checkGrade(this->_grade - 1);
	--this->_grade;
}

void Bureaucrat::increment(int value) {
	std::cout << "Incrementing grade by " << value << std::endl;
	checkGrade(this->_grade - value);
	this->_grade -= value;
}

void Bureaucrat::decrement() {
	std::cout << "Decremneting grade by 1" << std::endl;
	checkGrade(this->_grade + 1);
	++this->_grade;
}

void Bureaucrat::decrement(int value) {
	std::cout << "Decrementing grade by " << value << std::endl;
	checkGrade(this->_grade + value);
	this->_grade += value;
}

void Bureaucrat::signForm(Form& form) {
	form.beSigned(*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat : grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat : grade too low";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& obj) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
