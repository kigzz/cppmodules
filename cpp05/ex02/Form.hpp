/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:18:10 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 17:18:11 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form {
public:
	Form(const std::string& name, const std::string& target, int signGrade, int executeGrade);
	Form(const Form& copy);
	virtual ~Form();

	Form& operator=(const Form& other);

	void beSigned(const Bureaucrat& bureaucrat);

	virtual void execute() const = 0;

	const std::string& getName() const;
	const std::string& getTarget() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

private:
	Form();

	bool _signed;
	const std::string _name;
	const std::string _target;
	const int _signGrade;
	const int _executeGrade;

public:
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	class NotSigned : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
