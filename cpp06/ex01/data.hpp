/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:07:58 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 03:07:59 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <string>
#include <iostream>

struct Data {
	int n;
	std::string s;
};

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif
