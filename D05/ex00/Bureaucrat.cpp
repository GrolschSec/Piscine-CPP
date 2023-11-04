/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:55:24 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 10:57:01 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name), _grade(grade)
{
	if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &cp)
	: _name(cp.getName()), _grade(cp.getGrade())
{}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string	&Bureaucrat::getName(void)	const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void)	const
{
	return (this->_grade);
}

void	Bureaucrat::increment(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}


std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out 
		<< bureaucrat.getName()
		<< ", bureaucrat grade "
		<< bureaucrat.getGrade()
		<< "."
		<< std::endl;
    return (out);
}
