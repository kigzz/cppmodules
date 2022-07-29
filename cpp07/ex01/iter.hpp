/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:35:02 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 18:35:03 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T* arr, std::size_t size, void (*f)(T&)) {
	for (std::size_t i = 0; i < size; i++)
		f(arr[i]);
}

template<typename T>
void debug(T& var) {
	std::cout << var << std::endl;
}

template<typename T>
void increment(T& var) {
	++var;
}

// SPECIALIZATION

//template<>
//void increment<std::string> (std::string& str) {
//	std::cout << "Did you try to increment "<< str << "? :)" << std::endl;
//}

#endif
