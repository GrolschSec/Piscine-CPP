/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/11 10:30:14 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain())
{
	std::cout
		<< "Cat: default constructor called"
		<< std::endl;
}

Cat::Cat(Cat const &cat) : AAnimal("Cat"), _brain(new Brain(*cat._brain))
{
	std::cout
		<< "Cat: constructor by copy called"
		<< std::endl;
}

Cat::~Cat()
{
	std::cout
		<< "Cat: destructor called"
		<< std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*(rhs._brain));
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout
		<< "Cat: "
		<< "Meoow!"
		<< std::endl;
}

void Cat::setBrainIdea(const std::string &idea)
{
	this->_brain->setIdea(idea);
}

std::string	Cat::getBrainIdea(int index) const
{
	return (this->_brain->getIdea(index));
}

const Brain	*Cat::getBrainPtr(void)	const
{
	return (this->_brain->getPtr());
}
