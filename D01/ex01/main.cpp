/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:18:37 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/17 17:05:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	n;

	n = 10;
	Zombie *horde = zombieHorde(n, "zombar");
	for (int i = 0; i < n; i++)
		horde[i].annonce();
	delete [] horde;
	return (0);
}
