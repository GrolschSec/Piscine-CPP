/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:27 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 14:10:55 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : AAnimal("Dog"), _brain(new Brain())
{
	std::cout
		<< "Dog: default constructor called"
		<< std::endl;
}

Dog::Dog(Dog const &dog) : AAnimal("Dog"), _brain(new Brain(*dog._brain))
{
	std::cout
		<< "Dog: constructor by copy called"
		<< std::endl;
}

Dog::~Dog()
{
	std::cout
		<< "Dog: destructor called"
		<< std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout
		<< "Dog: "
		<< "Woof!"
		<< std::endl;
}

void Dog::setBrainIdea(const std::string &idea)
{
	this->_brain->setIdea(idea);
}

std::string	Dog::getBrainIdea(int index) const
{
	return (this->_brain->getIdea(index));
}

const Brain	*Dog::getBrainPtr(void)	const
{
	return (this->_brain->getPtr());
}
