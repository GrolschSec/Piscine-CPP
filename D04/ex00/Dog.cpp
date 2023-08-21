/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:27 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 13:28:25 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout
		<< "Dog: default constructor called"
		<< std::endl;
}

Dog::Dog(Dog const &Dog) : Animal("Dog")
{
	*this = Dog;
	std::cout
		<< "Dog: constructor by copy called"
		<< std::endl;
}

Dog::~Dog()
{
	std::cout
		<< "Dog: destructor called"
		<< std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout
		<< "Dog: "
		<< "Woof!"
		<< std::endl;
}