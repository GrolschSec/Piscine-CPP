/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:06:03 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 15:10:50 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(int g_s, int g_e, std::string name)
	: _name(name),  _signed(false), _grade_s(g_s), _grade_e(g_e)
{
	if (g_s < 1 || g_e < 1)
		throw Form::GradeTooHighException();
	if (g_s > 150 || g_e > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cp)
	: _name(cp.getName()), _signed(cp.isSigned()),
	_grade_s(cp.getGradeS()), _grade_e(cp.getGradeE())
{}

Form	&Form::operator=(const Form &rhs)
{
	(void)rhs;
	return (*this);
}

Form::~Form() {}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeS())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

int	Form::getGradeE(void)	const
{
	return (this->_grade_e);
}

const std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::isSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeS(void)	const
{
	return (this->_grade_s);
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
    out << "Form: " << form.getName() << std::endl
        << "Status: " << (form.isSigned() ? "Signed" : "Not signed") << std::endl
        << "Grade required to sign: " << form.getGradeS() << std::endl
        << "Grade required to execute: " << form.getGradeE();
    return out;
}
