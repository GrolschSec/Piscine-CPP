/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:19 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 16:23:58 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap robot1("R2D2");
	FragTrap robot2(robot1);
	FragTrap robot3("C3PO");
	FragTrap robot4;

	robot1.attack("C3P0");
	robot3.takeDamage(4);
	robot3.beRepaired(3);
}
