/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/06 17:15:24 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	const WrongCat*	ocat = new WrongCat();
	const WrongAnimal*	wcat = new WrongCat();
	std::cout << std::endl;
	
	ocat->makeSound();
	wcat->makeSound();
	std::cout << std::endl;

	delete ocat;
	delete wcat;
	return (0);
}
