/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 20:15:51 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 21:46:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/******************************************************************************/

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", "Unknown", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cp)
	: AForm(cp) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	AForm::operator=(rhs);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/******************************************************************************/

void	ShrubberyCreationForm::executeAction(Bureaucrat const &executor) const {
	execute(executor);
	std::ofstream	file((this->getTarget() + "_shrubbery").c_str());

	if (!file)
		throw std::ofstream::failure("failed to open file.");
	file         
		<< "		t			  t\n"
		<< "       .#.			 .#.\n"
		<< "      .###.		    .###.\n"
		<< "     .#%##%.	   .#%##%.\n"
		<< "    .%##%###.	  .%##%###.\n"
		<< "   .##%###%##. 	 .##%###%##.\n"
		<< "  .#%###%##%##.	.#%###%##%##.\n"
		<< "        #			  #\n"
		<< "        #			  #"
		<< std::endl;
}
