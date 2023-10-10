/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 13:51:02 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Dog *d0 = new Dog;
	Cat	*c0 = new Cat;

	d0->setBrainIdea("Dog: First Idea.");
	d0->setBrainIdea("Dog: Second Idea.");
	
	c0->setBrainIdea("Cat: Fisrt Idea.");
	c0->setBrainIdea("Cat: Second Idea.");
	
	Dog *d1 = new Dog(*d0);
	Cat *c1 = new Cat(*c0);
	std::cout << std::endl;

	/* DOG 0 */
	std::cout << "d0 BrainIdea: " << d0->getBrainIdea(0) << std::endl;
	std::cout << "d0 BrainPTR: " << d0->getBrainPtr() << std::endl;
	std::cout << std::endl;

	/* DOG 1 */
	std::cout << "d1 BrainIdea: " << d1->getBrainIdea(0) << std::endl;
	std::cout << "d1 BrainPTR: " << d1->getBrainPtr() << std::endl;
	std::cout << std::endl;

	/* CAT 0 */
	std::cout << "c0 BrainIdea: " << c0->getBrainIdea(1) << std::endl;
	std::cout << "c0 BrainPTR: " << c0->getBrainPtr() << std::endl;
	std::cout << std::endl;

	/* CAT 1 */
	std::cout << "c1 BrainIdea: " << c1->getBrainIdea(1) << std::endl;
	std::cout << "c1 BrainPTR: " << c1->getBrainPtr() << std::endl;
	std::cout << std::endl;

	Cat *c2 = new Cat(*c0);
	c2->setBrainIdea("Cat: here is the third idea.");
	std::cout << "c2 BrainIdea: " << c2->getBrainIdea(2) << std::endl;
	std::cout << "c2 BrainPTR: " << c2->getBrainPtr() << std::endl;
	std::cout << std::endl;
	
	delete d0;
	delete c0;
	
	delete d1;
	delete c1;

	delete c2;

    return (0);
}
