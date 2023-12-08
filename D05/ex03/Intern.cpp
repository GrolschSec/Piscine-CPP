/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:47:28 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 23:22:50 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/******************************************************************************/

Intern::Intern(void) {}

Intern::Intern(const Intern &cp) {}

Intern	&Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return (*this);
}

Intern::~Intern() {}

/******************************************************************************/

AForm	*Intern::makeForm(const std::strign &name, const std::string &target) {
	std::string	list[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};
	try {
		for (int i = 0; i < 3; i++) {
			if (list[i] == name) {
				switch (i) {
					case 0:
						std::cout << "Intern creates " << name << std::endl;
						return (new PresidentialPardonForm(target));
					case 1:
						std::cout << "Intern creates " << name << std::endl;
						return (new RobotomyRequestForm(target));
					case 2:
						std::cout << "Intern creates " << name << std::endl;
						return (new ShrubberyCreationForm(target));
					default:
						throw Intern::InvalidFormException();
				}
			}
		}
	}
	catch (Intern::InvalidFormException &e) {
		std::cerr
			<< "[Intern]: Invalid form name, cannot create form.\n";
	}
}

/******************************************************************************/

const char*	Intern::InvalidFormException::what() const throw() {
	return ("Invalid form.");
}
