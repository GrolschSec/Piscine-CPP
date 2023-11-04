/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:50:47 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/04 10:55:56 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cp);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		const std::string	&getName(void)	const;
		int					getGrade(void)	const;
		void				increment(void);
		void				decrement(void);
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
		const std::string		_name;
		int						_grade;
		Bureaucrat(void);
};
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif
