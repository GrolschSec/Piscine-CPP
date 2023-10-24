/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:58:53 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/06 18:07:07 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Unknown")
{
	std::cout
		<< "WrongAnimal: default constructor called for "
		<< this->getType()
		<< std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout
		<< "WrongAnimal: constructor called for "
		<< this->getType()
		<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wronganimal)
{
	*this = wronganimal;
	std::cout
		<< "WrongAnimal: constructor by copy called for "
		<< this->getType()
		<< std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout
		<< "WrongAnimal: destructor called for "
		<< this->getType()
		<< std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout
		<< this->getType()
		<< ": Moojjjjd!"
		<< std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}
