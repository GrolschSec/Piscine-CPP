/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:25:06 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 22:07:52 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************************************************************************/

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", "Unknown", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cp)
	: AForm(cp) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	AForm::operator=(rhs);
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

/******************************************************************************/

void	RobotomyRequestForm::executeAction(Bureaucrat const & executor) const {
	execute(executor);
	std::cout 
		<< "*ZzzzZzzzZzzzZzzzZzzzZzzzZzzzZzzz*" 
		<< std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0) {
		std::cout 
			<< this->getTarget() 
			<< " has been robotomized!" 
			<< std::endl;
	} else {
		std::cout 
			<< this->getTarget() 
			<< " robotomization has failed!" 
			<< std::endl;
	}
}
