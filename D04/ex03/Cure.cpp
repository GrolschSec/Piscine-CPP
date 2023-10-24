/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:14:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:48:12 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout
		<< "[Cure] - Default constructor called"
		<< std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	std::cout
		<< "[Cure] - Constructor by copy called"
		<< std::endl;
}

Cure::~Cure()
{
	std::cout
		<< "[Cure] - Destructor called"
		<< std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout
		<< "* heals "
		<< target.getName()
		<< "’s wounds *"
		<< std::endl;
}
