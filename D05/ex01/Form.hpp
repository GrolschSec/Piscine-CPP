/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:06:06 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 15:10:59 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(int g_s, int g_e, std::string name);
		Form(const Form &cp);
		Form	&operator=(const Form &rhs);
		~Form();
		void				beSigned(const Bureaucrat &bureaucrat);
		int					getGradeS(void)	const;
		int					getGradeE(void)	const;
		const std::string	getName(void)	const;
		bool				isSigned(void)	const;
		class GradeTooHighException : public std::exception 
		{
			public:
				const char* what() const throw() 
				{
					return "Grade is too high";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Grade is too low";
				}
		};
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_s;
		const int			_grade_e;
		Form(void);
};
std::ostream	&operator<<(std::ostream &out, const Form &form);
#endif
