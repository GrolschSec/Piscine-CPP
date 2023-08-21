/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:37:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 14:21:32 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout
		<< "WrongCat: default constructor called"
		<< std::endl;
}

WrongCat::WrongCat(WrongCat const &wrongcat) : WrongAnimal()
{
	*this = wrongcat;
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
		<< "WrongCat: Meooooow Meooooooow !"
		<< std::endl;
}
