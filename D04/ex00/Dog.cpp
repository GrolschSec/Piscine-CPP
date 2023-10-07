/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:27 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 13:13:21 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout
		<< "Dog: default constructor called"
		<< std::endl;
}

Dog::Dog(Dog const &dog) : Animal(dog)
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