/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:34:55 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 16:21:44 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	IMateriaSource* src2 = new MateriaSource();

	src2->learnMateria(new Cure());
	src2->learnMateria(new Ice());

	AMateria *tmp2;

	ICharacter *ben = new Character();
	ICharacter *tom = new Character();


	tmp2 = src2->createMateria("cure");
	ben->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	ben->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	ben->equip(tmp2);
	tmp2 = src2->createMateria("ice");
	ben->equip(tmp2);
	tmp2 = src2->createMateria("cure");
	ben->equip(tmp2);
	delete tmp2;

	ben->use(0, *tom);
	ben->use(1, *tom);
	ben->use(2, *tom);
	ben->use(3, *tom);
	
	delete ben;
	delete tom;
	delete src2;
	
	return (0);
}
