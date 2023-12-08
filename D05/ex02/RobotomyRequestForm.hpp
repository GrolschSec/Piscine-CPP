/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:51:30 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 19:55:11 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : AForm {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &cp);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();
		virtual void	executeAction(Bureaucrat const & executor);
};
#endif
