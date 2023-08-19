/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:19 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 15:22:39 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap robot1("R2D2");
	ClapTrap robot2(robot1);
	ClapTrap robot3("C3PO");
	ClapTrap robot4;

	robot1.attack("C3P0");
	robot3.takeDamage(4);
	robot3.beRepaired(3);
}
