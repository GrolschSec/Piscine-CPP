/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:17:02 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 16:25:23 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout
		<< "FragTrap: default constructor called for "
		<< this->_name
		<< std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout
		<< "FragTrap: constructor called for "
		<< this->_name
		<< std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap()
{
	*this = fragtrap;
	std::cout
		<< "FragTrap: constructor by copy called for "
		<< this->_name
		<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout
		<< "FragTrap: destructor called for "
		<< this->_name
		<< std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout
		<< "FragTrap: "
		<< this->_name
		<< " asked for an high five !"
		<< std::endl;
}
