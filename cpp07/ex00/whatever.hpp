/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 18:35:32 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 18:35:33 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T& max(const T& x, const T& y) {
	if (x > y)
		return x;
	return y;
}

template <typename T>
const T& min (const T& x, const T& y) {
	if (x < y)
		return x;
	return y;
}

// SPECIALIZATION TEMPLATE

//template <>
//const std::string& max<std::string> (const std::string& str1, const std::string& str2) {
//	if (str1.size() > str2.size())
//		return str1;
//	return str2;
//}
//
//template <>
//const std::string& min<std::string> (const std::string& str1, const std::string& str2) {
//	if (str1.size() < str2.size())
//		return str1;
//	return str2;
//}

#endif
