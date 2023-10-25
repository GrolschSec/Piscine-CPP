/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:26:14 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/25 09:27:24 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int s_grade, const int e_grade)
	:
	_name(name),
	_signed(false),
	_s_grade(s_grade),
	_e_grade(e_grade)
{
	if (this->_e_grade < 1 || this->_s_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_e_grade > 150 || this->_s_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other)
	:
	_name(other._name),
	_signed(other._signed),
	_s_grade(other._s_grade),
	_e_grade(other._e_grade)
{}

Form &Form::operator=(const Form &rhs)
{
	(void)rhs;
	return (*this);
}

Form::~Form() {}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::isSigned(void) const
{
	return (this->_signed);
}

int Form::getSGrade(void) const
{
	return (this->_s_grade);
}

int Form::getEGrade(void) const
{
	return (this->_e_grade);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (this->isSigned())
		throw Form::FormSignedException();
	if (b.getGrade() <= this->getSGrade())
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os
		<< "Form name: "
		<< form.getName()
		<< " Form signed grade: "
		<< form.getSGrade()
		<< " Form execute grade: "
		<< form.getEGrade()
		<< " Is the form signed: "
		<< form.isSigned()
		<< std::endl;
	return (os);
}
