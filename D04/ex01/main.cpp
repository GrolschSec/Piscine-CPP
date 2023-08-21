/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 15:16:57 by rlouvrie         ###   ########.fr       */
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

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
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
	const WrongAnimal* wcat = new WrongCat();
	std::cout << std::endl;

	std::cout << ocat->getType() << std::endl;
	std::cout << wcat->getType() << std::endl;
	std::cout << std::endl;
	
	ocat->makeSound();
	wcat->makeSound();
	std::cout << std::endl;

	delete ocat;
	delete wcat;
	std::cout << std::endl;
	return (0);
}
