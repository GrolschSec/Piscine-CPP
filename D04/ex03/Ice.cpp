/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:17:17 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:49:37 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout
		<< "[Ice] - Default constructor called"
		<< std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	std::cout
		<< "[Ice] - Constructor by copy called"
		<< std::endl;
}

Ice::~Ice()
{
	std::cout
		<< "[Ice] - Destructor called"
		<< std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout
		<< "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
}
