/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:03:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 10:32:42 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
    try {
        Bureaucrat bob("Bob", 151);
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    try {
        Bureaucrat alice("Alice", 0);
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what();
    }

    try {
        Bureaucrat charlie("Charlie", 100);
        std::cout << charlie;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cerr << "Exception caught: " << e.what();
    }
    return (0);
}
