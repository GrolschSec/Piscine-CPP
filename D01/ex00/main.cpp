/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:45:57 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/17 15:27:11 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie stack("Stack");
	stack.annonce();
	std::cout << std::endl;
	Zombie *heap = newZombie("Heap");
	heap->annonce();
	std::cout << std::endl;
	randomChump("Chump");
	std::cout << std::endl;
	delete heap;
	return (0);
}
