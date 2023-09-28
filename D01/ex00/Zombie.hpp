/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:47:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/28 21:09:53 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	annonce(void);
	private:
		std::string	_name;
};
void	randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif
