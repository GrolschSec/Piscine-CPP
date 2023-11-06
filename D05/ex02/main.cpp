/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:50:43 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/06 11:29:23 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	try {
		Bureaucrat	test1("Arthur", 30);
		AForm		test(30, 30, "Admission");
		test1.signForm(test);
	}
	catch (const Bureaucrat::GradeTooHighException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Standard exception caught: " << e.what() << std::endl;
	}
	return (0);
}
