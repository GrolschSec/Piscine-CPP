/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 00:09:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/28 22:40:34 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl
{
	public:
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};
#endif