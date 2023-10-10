/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:49:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 15:56:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Default")
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	std::cout
		<< "[Character] - Default constructor called"
		<< std::endl;
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
	std::cout
		<< "[Character] - Constructor called"
		<< std::endl;
}

Character::Character(Character const &character) : _name(character._name)
{
    for (int i = 0; i < 4; ++i)
		this->_inventory[i] = (character._inventory[i] ? character._inventory[i]->clone() : NULL);
	std::cout
		<< "[Character] - Constructor by copy called"
		<< std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
			delete this->_inventory[i];
	std::cout
		<< "[Character] - Destructor called"
		<< std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
    	this->_name = rhs._name;
    	for (int i = 0; i < 4; ++i) {
        	if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = (rhs._inventory[i] ? rhs._inventory[i]->clone() : NULL);
		}
	}
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i) 
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !this->_inventory[idx])
		return;
	this->_inventory[idx]->use(target);
}
