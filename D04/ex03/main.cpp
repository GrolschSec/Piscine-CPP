/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:34:55 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:33:12 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void)
{
	ICharacter		*paul = new Character("Paul");
	ICharacter		*tom = new Character("Tom");
	IMateriaSource	*src = new MateriaSource();
	AMateria		*cure = new Cure();
	AMateria		*ice = new Ice();
	
	src->learnMateria(ice);
	paul->equip(cure);
	paul->equip(ice);
	paul->use(1, *tom);
	paul->unequip(0);

	delete cure;
	delete paul;
	delete tom;
	delete src;
	return (0);
}
