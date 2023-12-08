/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:32 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 18:23:28 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/******************************************************************************/

AForm::AForm(std::string name, int s_grade, int e_grade)
    : _name(name), _signed(false), _s_grade(s_grade), _e_grade(e_grade) {
    if (this->_s_grade < 1 || this->_e_grade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_s_grade > 150 || this->_e_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &cp) 
	: _name(cp.getName()), _signed(false), 
	_s_grade(cp.getSGrade()), _e_grade(cp.getEGrade()) 
{}

AForm	&AForm::operator=(const AForm &rhs) {
	(void)rhs;
	return (*this);
}

AForm::~AForm() {}

/******************************************************************************/

std::string	AForm::getName(void)	const {
	return (this->_name);
}

bool	AForm::isSigned(void)	const {
	return (this->_signed);
}

int		AForm::getSGrade(void)	const {
	return (this->_s_grade);
}

int		AForm::getEGrade(void)	const {
	return (this->_e_grade);
}

std::string	AForm::getTarget(void)	const {
	return (this->_target);
}

/******************************************************************************/

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (this->isSigned())
		throw AForm::FormAlreadySignedException();
	if (bureaucrat.getGrade() > this->getSGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const {
	if (!this->isSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getEGrade())
		throw AForm::GradeTooLowException();
}

/******************************************************************************/

const char* AForm::GradeTooHighException::what() const throw() {
	return ("AForm: Grade is too high");
}

const char* AForm::GradeTooLowException::what()	const throw() {
	return ("AForm: Grade is too low");
}

const char*	AForm::FormAlreadySignedException::what()	const throw() {
	return ("Form: Form is already signed");
}

const char* AForm::FormNotSignedException::what()	const throw() {
	return ("Form: Form is not signed");
}

/******************************************************************************/

std::ostream	&operator<<(std::ostream &out, const AForm &AForm) {
	out
		<< "AForm [" << AForm.getName() << "]: \n"
		<< "- Grade required to sign: " << AForm.getSGrade() << ".\n"
		<< "- Grade required to execute: " << AForm.getEGrade() << ".\n"
		<< "- State of the AForm: " << (AForm.isSigned() ? "signed" : "unsigned")
		<< ".\n";
	return (out);
}
