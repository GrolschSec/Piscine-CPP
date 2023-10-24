/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:04:02 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 09:53:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
	:
	_name(name)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
	: _name(other.getName()),
	_grade(other.getGrade())
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os 
		<< obj.getName() 
		<< ", bureaucrat grade "
		<< obj.getGrade()
		<< ".\n";
	return (os);
}
