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
	Form();
	Form(const std::string& name, int signGrade, int executeGrade);
	Form(const Form& copy);
	~Form();

	void beSigned(const Bureaucrat& bureaucrat);

	Form& operator=(const Form& other);

	const std::string& getName() const;
	bool getSigned() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

private:
	bool _signed;
	const std::string _name;
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
};

std::ostream& operator<<(std::ostream& out, const Form& obj);

#endif
