/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:44:40 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:44:18 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("undefined")
{
	std::cout
		<< "[AMateria] - Default constructor called"
		<< std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout
		<< "[AMateria] - Constructor called"
		<< std::endl;
}

AMateria::AMateria(AMateria const &amateria)
{
    *this = amateria;
	std::cout
		<< "[AMateria] - Constructor by copy called"
		<< std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria::~AMateria()
{
	std::cout
		<< "[AMateria] - Destructor called"
		<< std::endl;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void) target;
}
