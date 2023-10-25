/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:26:03 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/25 10:12:47 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(const std::string name, const int s_grade, const int e_grade);
		Form(const Form &other);
		Form	&operator=(const Form &rhs);
		~Form();
		std::string	getName(void)	const;
		bool		isSigned(void)	const;
		int			getSGrade(void)	const;
		int			getEGrade(void)	const;
		void		beSigned(const Bureaucrat &b);
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too low.\n");
			}
		};
		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade too high.\n");
			}
		};
		class FormSignedException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Form is already signed.\n");
			}
		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_s_grade;
		const int			_e_grade;
		Form(void);
};
std::ostream	&operator<<(std::ostream &os, const Form &form);
#endif