/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 03:08:26 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/30 03:08:26 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <algorithm>

class Span {
private:
	typedef std::vector<int>::iterator IT;
	std::vector<int> _vector;
	std::size_t _size;

public:
	Span();
	Span(unsigned int n);
	Span(const Span& copy);
	~Span();

	Span& operator=(const Span& other);

	void addNumber(int n);
	void addRange(IT begin, IT end);

	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	std::size_t size() const;

	class SpanIsFullException : public std::exception {
	public:
		const char* what() const throw();
	};
	class SizeTooSmallException : public std::exception {
	public:
		const char* what() const throw();
	};

};


#endif
