/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:50:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 14:54:31 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout
		<< "Brain: default constructor called"
		<< std::endl;
}

Brain::Brain(Brain const &brain)
{
	*this = brain;
	std::cout
		<< "Brain: copy constructor called"
		<< std::endl;
}

Brain::~Brain()
{
	std::cout
		<< "Brain: destructor called"
		<< std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; ++i)
        	this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
