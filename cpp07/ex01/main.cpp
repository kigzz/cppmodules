/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:35:06 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 18:35:07 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int arrInt[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::string arrString[4] = {"Luffy", "Zoro", "Nami", "Chopper"};

	std::cout << "INT ARRAY:\n" << std::endl;
	::iter(arrInt, 10, &debug);

	std::cout << "\nINT ARRAY (after increment):\n" << std::endl;
	::iter(arrInt, 10, &increment);
	::iter(arrInt, 10, &debug);

	std::cout << "\nSTRING ARRAY:\n" << std::endl;
	::iter(arrString, 4, &debug);
//	::iter(arrString, 4, &increment);

	return 0;
}
