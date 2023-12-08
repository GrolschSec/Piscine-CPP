/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:27 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 18:30:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form(std::string name, int s_grade, int e_grade);
        Form(const Form &cp);
        Form    &operator=(const Form &rhs);    
        ~Form();
        std::string	getName(void)	const;
		bool		isSigned(void)	const;
		int			getSGrade(void)	const;
		int			getEGrade(void)	const;
		void		beSigned(const Bureaucrat &bureaucrat);
        class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};  
    private:
        const std::string   _name;
        bool                _signed;
        const int           _s_grade;
        const int           _e_grade;
        Form(void);
};
std::ostream	&operator<<(std::ostream &out, const Form &form);
#endif
