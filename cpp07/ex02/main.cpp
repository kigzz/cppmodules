/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:31:17 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 20:31:18 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	Array<int> arrInt(5);
	Array<char> arrChar(5);
	Array<std::string> arrString(3);

	arrInt[0] = 10;
	arrInt[1] = 11;
	arrInt[2] = 12;
	arrInt[3] = 13;
	arrInt[4] = 14;

	arrChar[0] = 'a';
	arrChar[1] = 'b';
	arrChar[2] = 'c';
	arrChar[3] = 'd';
	arrChar[4] = 'e';

	arrString[0] = "hello";
	arrString[1] = "world";
	arrString[2] = ":D";

	std::cout << "\n========== BASIC TESTS ==========\n" << std::endl;

	std::cout << "INT ARRAY:" << std::endl;
	std::cout << "size: " << arrInt.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrInt.size(); ++i) {
		std::cout << arrInt[i] << std::endl;
	}

	std::cout << "\nCHAR ARRAY:" << std::endl;
	std::cout << "size: " << arrChar.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrChar.size(); ++i) {
		std::cout << arrChar[i] << std::endl;
	}

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << std::endl;
	}

	std::cout << "\n========== EXCEPTIONS ==========\n" << std::endl;

	try {
		std::cout << arrString[1] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrString[-1] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrString[5] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n========== COPY CONSTRUCTOR (DEEP) ==========\n" << std::endl;

	Array<std::string> copy(arrString);

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << std::endl;
	}

	Array<int> copy2(arrInt);

	std::cout << "\nINT ARRAY" << std::endl;
	std::cout << "size: " << arrInt.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrInt.size(); ++i) {
		std::cout << arrInt[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy2.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy2.size(); ++i) {
		std::cout << copy2[i] << std::endl;
	}

	std::cout << "\n----- change string array[2] to \":(\" -----" << std::endl;
	arrString[2] = ":(";

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << std::endl;
	}

	std::cout << "\n========== ASSIGNMENT OPERATOR (DEEP) ==========\n" << std::endl;

	Array<std::string> copy3(5);

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy3.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy3.size(); ++i) {
		std::cout << copy3[i] << std::endl;
	}

	std::cout << "\n----- copy = string array -----" << std::endl;
	copy3 = arrString;

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy3.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy3.size(); ++i) {
		std::cout << copy3[i] << std::endl;
	}

	std::cout << "\n----- change string copy3[2] to \":D\"-----" << std::endl;
	copy3[2] = ":D";
	std::cout << "copy3[2] = " << copy3[2] << std::endl;

	std::cout << "\nSTRING ARRAY:" << std::endl;
	std::cout << "size: " << arrString.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < arrString.size(); i++) {
		std::cout << arrString[i] << std::endl;
	}
	std::cout << "\nCOPY ARRAY:" << std::endl;
	std::cout << "size: " << copy3.size() << '\n' << std::endl;
	for (std::size_t i = 0; i < copy3.size(); i++) {
		std::cout << copy3[i] << std::endl;
	}

	return 0;
}

// MAIN 42
//
//#include <iostream>
//#include <cstdlib>
//#include "Array.hpp"
//#define MAX_VAL 750
//
//int main(int, char**)
//{
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//			delete [] mirror;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[750] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;
//    return 0;
//}