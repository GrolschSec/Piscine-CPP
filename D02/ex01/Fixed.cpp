/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:00:09 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/29 12:18:44 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		setRawBits(rhs._value);
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed::Fixed(int const int_val)
{
	this->setRawBits(int_val << this->_fractionnalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const float_val)
{
	this->setRawBits(roundf(float_val * (1 << this->_fractionnalBits)));
	std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_value) / (1 << this->_fractionnalBits));
}

int Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionnalBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}
