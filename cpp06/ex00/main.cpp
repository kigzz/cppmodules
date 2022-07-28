/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 03:15:46 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/28 03:15:46 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "One Argument required." << std::endl;
		return (1);
	}
	try {
		Conversion conversion(argv[1]);
	}
	catch (const Conversion::ErrorException& e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
