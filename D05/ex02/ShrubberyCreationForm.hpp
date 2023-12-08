/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 19:55:56 by romain            #+#    #+#             */
/*   Updated: 2023/12/08 19:59:20 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP
# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cp);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();
		void	executeAction(Bureaucrat const & executor);
};
#endif
