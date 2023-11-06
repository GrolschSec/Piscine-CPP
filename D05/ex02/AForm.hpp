/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:06:06 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 15:10:59 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(int g_s, int g_e, std::string name);
		AForm(const AForm &cp);
		AForm	&operator=(const AForm &rhs);
		virtual ~AForm();
		void				beSigned(const Bureaucrat &bureaucrat);
		int					getGradeS(void)	const;
		int					getGradeE(void)	const;
		const std::string	getName(void)	const;
		bool				isSigned(void)	const;
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		AForm(void);
};
std::ostream	&operator<<(std::ostream &out, const AForm &AForm);
#endif
