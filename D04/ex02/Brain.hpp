/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:46:00 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 14:51:17 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const &brain);
		~Brain();
		Brain	&operator=(Brain const &rhs);
};
#endif