/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:44:40 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 15:48:34 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("undefined") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &amateria)
{
    *this = amateria;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    (void) target;
}
