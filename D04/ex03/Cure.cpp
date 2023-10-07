/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:14:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 16:20:20 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const &src) : AMateria(src) {}

Cure::~Cure() {}

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
