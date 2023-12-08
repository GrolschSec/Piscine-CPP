/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:50:47 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/12/08 22:27:03 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "AForm.hpp"

class	AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &cp);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		std::string			getName(void)	const;
		int					getGrade(void)	const;
		void				increment(void);
		void				decrement(void);
		void				signForm(AForm &form);
		void				executeForm(AForm const & form);
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
	private:
		const std::string		_name;
		int						_grade;
		Bureaucrat(void);
};
std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif
