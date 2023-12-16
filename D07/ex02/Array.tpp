/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:01:35 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 11:05:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : _size(0), _array(new T[0]) {}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size), _array(new T[size]) {}

template <typename T>
Array<T>::Array(Array<T> const &cp) {
	this->_size = cp._size;
	this->_array = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++) {
		this->_array[i] = cp._array[i];
	}
}

template <typename T>
Array<T>	&Array<T>::operator=(Array<T> const &rhs) {
	if (this != &rhs) {
		this->_size = rhs._size;
		if (this->_array)
			delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete [] this->_array;
}

template <typename T>
const char*	Array<T>::OutOfRangeException::what() const throw() {
	return ("Index is out of range.");
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->_size)
		throw OutOfRangeException();
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void)	const {
	return (this->_size);
}
