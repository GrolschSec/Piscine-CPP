/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:19 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 16:02:07 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap robot1("R2D2");
	ScavTrap robot2(robot1);
	ScavTrap robot3("C3PO");
	ScavTrap robot4;

	robot1.attack("C3P0");
	robot3.takeDamage(4);
	robot3.beRepaired(3);
}
