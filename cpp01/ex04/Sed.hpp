/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:07:00 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:07:02 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

class Sed {
public:
	Sed();
	~Sed();

	static int replace(std::string const filename, std::string const s1, std::string const s2);

private:
	static std::string _strReplace(std::string line, std::string const s1, std::string const s2);
};


#endif
