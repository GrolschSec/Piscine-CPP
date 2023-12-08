/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:02:06 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 22:29:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void) {
	Bureaucrat				tom("tom", 5);
	ShrubberyCreationForm	f1;
	PresidentialPardonForm	f2;
	RobotomyRequestForm		f3;

	tom.signForm(f1);
	tom.executeForm(f1);
	tom.executeForm(f2);
	tom.signForm(f3);
	tom.executeForm(f3);
	
}
