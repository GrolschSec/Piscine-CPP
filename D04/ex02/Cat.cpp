/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 16:03:50 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain())
{
	std::cout
		<< "Cat: default constructor called"
		<< std::endl;
}

Cat::Cat(Cat const &cat) : AAnimal("Cat")
{
	*this = cat;
	std::cout
		<< "Cat: constructor by copy called"
		<< std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout
		<< "Cat: destructor called"
		<< std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
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
