/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:04:06 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/25 10:05:01 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		std::string	getName(void)	const;
		int			getGrade(void)	const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		signForm(Form &f);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low.\n");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high.\n");
				}
		};
	private:
		const std::string	_name;
		int					_grade;
		Bureaucrat(void);
};
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &obj);
#endif
