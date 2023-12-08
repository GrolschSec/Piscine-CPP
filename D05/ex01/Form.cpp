/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:32 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 19:16:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/

Form::Form(std::string name, int s_grade, int e_grade)
    : _name(name), _signed(false), _s_grade(s_grade), _e_grade(e_grade) {
    if (this->_s_grade < 1 || this->_e_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_s_grade > 150 || this->_e_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &cp) 
	: _name(cp.getName()), _signed(false), 
	_s_grade(cp.getSGrade()), _e_grade(cp.getEGrade()) 
{}

Form	&Form::operator=(const Form &rhs) {
	(void)rhs;
	return (*this);
}

Form::~Form() {}

/******************************************************************************/

std::string	Form::getName(void)	const {
	return (this->_name);
}

bool	Form::isSigned(void)	const {
	return (this->_signed);
}

int		Form::getSGrade(void)	const {
	return (this->_s_grade);
}

int		Form::getEGrade(void)	const {
	return (this->_e_grade);
}

/******************************************************************************/

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	if (this->isSigned())
		throw Form::FormAlreadySignedException();
	if (bureaucrat.getGrade() > this->getSGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

/******************************************************************************/

const char* Form::GradeTooHighException::what() const throw() {
	return ("Form: Grade is too high");
}

const char* Form::GradeTooLowException::what()	const throw() {
	return ("Form: Grade is too low");
}

const char*	Form::FormAlreadySignedException::what()		const throw() {
	return ("Form: Form is already signed");
}

/******************************************************************************/

std::ostream	&operator<<(std::ostream &out, const Form &form) {
	out
		<< "Form [" << form.getName() << "]: \n"
		<< "- Grade required to sign: " << form.getSGrade() << ".\n"
		<< "- Grade required to execute: " << form.getEGrade() << ".\n"
		<< "- State of the form: " << (form.isSigned() ? "signed" : "unsigned")
		<< ".\n";
	return (out);
}
