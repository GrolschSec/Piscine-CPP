/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:47:25 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 23:26:16 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &cp);
		Intern	&operator=(const Intern &rhs);
		~Intern();
		AForm	*makeForm(const std::string &name, const std::string &target);
		class InvalidFormException : std::exception {
			public:
				const char* what() const throw();
		};
};
#endif
