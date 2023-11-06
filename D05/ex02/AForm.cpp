/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:06:03 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 15:10:50 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(int g_s, int g_e, std::string name)
	: _name(name),  _signed(false), _grade_s(g_s), _grade_e(g_e)
{
	if (g_s < 1 || g_e < 1)
		throw AForm::GradeTooHighException();
	if (g_s > 150 || g_e > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cp)
	: _name(cp.getName()), _signed(cp.isSigned()),
	_grade_s(cp.getGradeS()), _grade_e(cp.getGradeE())
{}

AForm	&AForm::operator=(const AForm &rhs)
{
	(void)rhs;
	return (*this);
}

AForm::~AForm() {}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeS())
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

int	AForm::getGradeE(void)	const
{
	return (this->_grade_e);
}

const std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::isSigned(void) const
{
	return (this->_signed);
}

int	AForm::getGradeS(void)	const
{
	return (this->_grade_s);
}

std::ostream	&operator<<(std::ostream &out, const AForm &AForm)
{
    out << "AForm: " << AForm.getName() << std::endl
        << "Status: " << (AForm.isSigned() ? "Signed" : "Not signed") << std::endl
        << "Grade required to sign: " << AForm.getGradeS() << std::endl
        << "Grade required to execute: " << AForm.getGradeE();
    return out;
}
