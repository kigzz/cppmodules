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
	data->n = 42;
	data->s = "Hello World!";


	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << std::endl;

	std::cout << "Data             : " << data << std::endl;
	std::cout << "Address: " << data << "\nString: " << data->s << "\nInt: " << data->n << std::endl;
	rawData = serialize(data);
	std::cout << "Raw data         : " << rawData << std::endl;
	retData = deserialize(rawData);
	std::cout << "Deserialized data: " << retData << std::endl;
	std::cout << "Address: " << data << "\nString: " << retData->s << "\nInt: " << retData->n << std::endl;


	delete data;

	return 0;
}
