/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:25:26 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 20:48:15 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP
# include <iostream>
# include <fstream>
# include "AForm.hpp"

class PresidentialPardonForm : AForm {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &cp);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();
		virtual void	executeAction(Bureaucrat const & executor);
};
#endif