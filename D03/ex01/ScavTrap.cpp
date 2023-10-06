/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:28:56 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/06 11:57:51 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout 
		<< "ScavTrap: Default constructor called for "
		<< this->_name
		<< std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout 
		<< "ScavTrap: constructor called for "
		<< this->_name
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout
		<< "ScavTrap: constructor by copy called for "
		<< this->_name
		<< std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout
		<< "ScavTrap: destructor called for "
		<< this->_name
		<< std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout
		<< "ScavTrap: "
		<< this->_name
		<< " entered in gate keeper mode !"
		<< std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints >= 1 && this->_energyPoints >= 1)
	{
		std::cout << "ScavTrap: " << this->_name
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
