/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 15:10:17 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout
		<< "Cat: default constructor called"
		<< std::endl;
}

Cat::Cat(Cat const &cat) : Animal("Cat")
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
		Animal::operator=(rhs);
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
