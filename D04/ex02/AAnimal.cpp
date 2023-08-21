/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 15:59:33 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Unknown")
{
	std::cout
		<< "AAnimal: default constructor called for "
		<< this->_type
		<< std::endl;
}

AAnimal::AAnimal(std::string const &type) : _type(type)
{
	std::cout
		<< "AAnimal: constructor called for "
		<< this->_type
		<< std::endl;
}

AAnimal::AAnimal(AAnimal const &Aanimal)
{
	*this = Aanimal;
	std::cout
		<< "AAnimal: constructor by copy called for "
		<< this->_type
		<< std::endl;
}

AAnimal::~AAnimal()
{
	std::cout
		<< "AAnimal: destructor called for "
		<< this->_type
		<< std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
