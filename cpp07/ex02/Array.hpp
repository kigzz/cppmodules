/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:31:13 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/29 20:31:14 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
public:
	Array();
	Array(unsigned int size);
	Array(const Array& copy);
	~Array();

	Array& operator=(const Array& other);

	T& operator[](std::size_t index) const;

	std::size_t size() const;

	class InvalidIndexException : public std::exception {
	public:
		const char* what() const throw();
	};

private:
	T* _first;
	std::size_t _size;
};

template <typename T>
Array<T>::Array() : _first(NULL), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int size) {
	this->_first = new T[size];
	this->_size = size;
}

template <typename T>
Array<T>::Array(const Array &copy) : _first(NULL) {
	*this = copy;
}

template <typename T>
Array<T>::~Array() {
	delete [] this->_first;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this == &other)
		return *this;
	if (this->_size != other._size) {
		if (this->_first != NULL)
			delete[] this->_first;
		this->_first = new T[other._size];
		this->_size = other.size();
	}
	for (std::size_t i = 0; i < this->_size; ++i) {
		this->_first[i] = other[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](std::size_t index) const {
	if (index >= this->_size || index < 0)
		throw Array::InvalidIndexException();
	else
		return this->_first[index];
}

template <typename T>
size_t Array<T>::size() const {
	return this->_size;
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw() {
	return "Invalid index";
}

#endif
