/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:47:52 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 23:47:54 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& copy);
	~Intern();

	Intern& operator=(const Intern& other);

	Form* makeForm(std::string name, std::string target);

private:
	typedef struct s_forms {
		std::string _name;
		Form *_formClass;
	} t_forms;
};

#endif
