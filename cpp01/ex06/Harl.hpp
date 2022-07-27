/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:08:29 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:08:29 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPPMODULES_HARL_HPP
#define CPPMODULES_HARL_HPP

#include <string>
#include <iostream>

class Harl {
public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();
};


#endif
