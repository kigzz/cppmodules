/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:35:24 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 18:35:25 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main() {
	int a = 2;
	int b = 3;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "********** SWAP **********" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "********** SWAP **********" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

//	std::string elephant = "elephant";
//	std::string souris = "souris";
//	std::cout << "elephant = " << elephant << ", souris = " << souris << std::endl;
//	std::cout << "********** SWAP **********" << std::endl;
//	::swap(elephant, souris);
//	std::cout << "elephant = " << elephant << ", souris = " << souris << std::endl;
//	std::cout << "min(souris, elephant) = " << ::min(souris, elephant) << std::endl;
//	std::cout << "max(souris, elephant) = " << ::max(souris, elephant) << std::endl;
	return 0;
}
