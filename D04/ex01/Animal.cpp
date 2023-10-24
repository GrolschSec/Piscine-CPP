/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 17:19:22 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Unknown")
{
	std::cout
		<< "Animal: default constructor called for "
		<< this->_type
		<< std::endl;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout
		<< "Animal: constructor called for "
		<< this->_type
		<< std::endl;
}

Animal::Animal(Animal const &animal)
{
	*this = animal;
	std::cout
		<< "Animal: constructor by copy called for "
		<< this->_type
		<< std::endl;
}

Animal::~Animal()
{
	std::cout
		<< "Animal: destructor called for "
		<< this->_type
		<< std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::makeSound(void) const
{
	std::cout
		<< this->getType()
		<< ": Moojjjjd!"
		<< std::endl;
}
