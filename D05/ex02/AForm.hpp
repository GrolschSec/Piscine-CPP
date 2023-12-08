/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:27 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 18:30:04 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    public:
        AForm(std::string name, std::string target, int s_grade, int e_grade);
        AForm(const AForm &cp);
        AForm    &operator=(const AForm &rhs);    
        virtual ~AForm();
        std::string		getName(void)	const;
		std::string		getTarget(void)	const;
		bool			isSigned(void)	const;
		int				getSGrade(void)	const;
		int				getEGrade(void)	const;
		void			beSigned(const Bureaucrat &bureaucrat);
		void			execute(Bureaucrat const & executor) const;
		virtual void	executeAction(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception {
			public:
				const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				const char* what() const throw();
		};
    private:
        const std::string   _name;
		const std::string	_target;
        bool                _signed;
        const int           _s_grade;
        const int           _e_grade;
        AForm(void);
};
std::ostream	&operator<<(std::ostream &out, const AForm &AForm);
#endif
