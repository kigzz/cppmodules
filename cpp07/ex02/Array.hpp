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
#include <string>
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

private:
	T* _head;
	std::size_t _size;
public:
	class InvalidIndexException : public std::exception {
	public:
		const char* what() const throw();
	};
};

template <typename T>
Array<T>::Array() : _head(NULL), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int size) {
	this->_head = new T[size];
	this->_size = size;
}

template <typename T>
Array<T>::Array(const Array &copy) : _head(NULL) {
	*this = copy;
}

template <typename T>
Array<T>::~Array() {
	delete [] this->_head;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this == &other)
		return *this;
	if (this->_size != other._size) {
		if (this->_head != NULL)
			delete[] this->_head;
		this->_head = new T[other._size];
		this->_size = other.size();
	}
	for (std::size_t i = 0; i < this->_size; ++i) {
		this->_head[i] = other[i];
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](std::size_t index) const {
	if (index >= this->_size || index < 0)
		throw Array::InvalidIndexException();
	else
		return this->_head[index];
}

template <typename T>
size_t Array<T>::size() const {
	return this->_size;
}

template <typename T>
const char *Array<T>::InvalidIndexException::what() const throw() {
	return "Invalid index: index is either bigger than size or less than 0";
}

#endif
