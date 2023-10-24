/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 17:19:08 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout
		<< "Cat: default constructor called"
		<< std::endl;
}

Cat::Cat(Cat const &cat) : Animal(cat)
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
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout
		<< this->getType()
		<< ": Meoow!"
		<< std::endl;
}
