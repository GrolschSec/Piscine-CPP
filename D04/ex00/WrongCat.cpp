/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:37:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/06 16:35:05 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout
		<< "WrongCat: default constructor called"
		<< std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat) : WrongAnimal(wrongcat)
{
	std::cout
		<< "WrongCat: constructor called"
		<< std::endl;
}

WrongCat::~WrongCat()
{
	std::cout
		<< "WrongCat: destructor called"
		<< std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout
		<< this->getType()
		<< ": Meooooow Meooooooow !"
		<< std::endl;
}
