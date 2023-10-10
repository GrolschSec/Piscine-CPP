/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:50:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 14:03:09 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : _ideas_count(0)
{
	for(int i = 0; i < 100; ++i) {
        this->ideas[i] = "";
    }
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
		this->_ideas_count = rhs._ideas_count;
	}
	return (*this);
}

void Brain::setIdea(std::string idea)
{
	if (this->_ideas_count >= 100)
		this->_ideas_count = 0;
	this->ideas[this->_ideas_count++] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index >= 100)
		return (std::string());
	return (this->ideas[index]);
}

const Brain *Brain::getPtr(void) const
{
	return (this);
}
