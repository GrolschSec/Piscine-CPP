/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:40:33 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/11/06 13:02:31 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include <iostream>
# include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &cp);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		virtual ~RobotomyRequestForm();
		virtual void execute(Bureaucrat const & executor) const;
};
#endif
