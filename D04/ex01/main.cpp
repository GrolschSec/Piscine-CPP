/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:36:47 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int		size = 100;
    Animal* animals[size];

    for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();
    for (int i = size / 2; i < size; ++i)
        animals[i] = new Cat();
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();
    for (int i = 0; i < size; ++i)
		delete animals[i];
    return (0);
}
