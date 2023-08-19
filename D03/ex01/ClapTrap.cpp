/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:29:57 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 16:06:55 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : 
	_name("Unknown"), 
	_hitPoints(10), 
	_energyPoints(10), 
	_attackDamage(0)
{
	std::cout << "ClapTrap: default constructor called for " 
		<< _name << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : 
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap: constructor by string called for "
		<< _name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	*this = claptrap;
	std::cout << "ClapTrap: copy constructor called for " 
		<< _name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: destructor called for "
		<< _name << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{ 
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints >= 1 && this->_energyPoints >= 1)
	{
		std::cout << "Claptrap: " << this->_name
			<< " attacks " << target << ", causing "
			<< this->_attackDamage << " points of damage!"
			<< std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << this->_name
		<< " cannot attack anymore!"
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << this->_name
			<< " cannot take damage anymore, died"
			<< std::endl;
	else
	{
		this->_hitPoints = this->_hitPoints > amount 
			? this->_hitPoints - amount : 0;
		std::cout << this->_name
		<< " took " << amount
		<< " of damage points !"
		<< std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << this->_name
			<< " cannot be repaired, it's died!"
			<< std::endl;
	}
	else if (this->_energyPoints >= 1)
	{
		this->_hitPoints += amount;
		std::cout << this->_name 
			<< " has been repaired of " 
			<< amount << " points and has now " 
			<< this->_hitPoints << " points!" 
			<< std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << this->_name 
			<< " doesn't have enough energy points to be repaired !" 
			<< std::endl;
	}
}
