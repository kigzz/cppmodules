/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 03:08:02 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 03:08:03 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data* data;
	uintptr_t rawData;
	Data* retData;

	data = new Data;
	data->n = 5;
	data->s = "Coucou";
	std::cout << "Data             : " << data << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s = " << data->s << std::endl;
	rawData = serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	std::cout << "Raw data         : " << &rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;
	std::cout << "n = " << data->n << std::endl;
	std::cout << "s = " << data->s << std::endl;

	delete data;

	return 0;
}
