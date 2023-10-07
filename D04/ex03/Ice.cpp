/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:17:17 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 16:20:16 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const &src) : AMateria(src) {}

Ice::~Ice() {}

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
