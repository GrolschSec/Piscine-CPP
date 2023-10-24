/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:27 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/06 17:24:58 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout
		<< "Dog: default constructor called"
		<< std::endl;
}

Dog::Dog(Dog const &dog) : Animal("Dog")
{
	*this = dog;
	std::cout
		<< "Dog: constructor by copy called"
		<< std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout
		<< "Dog: destructor called"
		<< std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout
		<< this->getType()
		<< ": Woof!"
		<< std::endl;
}