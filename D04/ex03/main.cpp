/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:34:55 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:39:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int	main(void) {

	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());	
	ICharacter *me = new Character("me");
	AMateria *tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter *bob = new Character("bob");
	
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(3, *bob);
	std::cout << std::endl;
	
	delete tmp;
	me->unequip(3);
	me->use(3, *bob);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(3, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	std::cout	<< std::endl
				<< std::endl
				<< std::endl;
				
	ICharacter *A = new Character("Alain");
	ICharacter *B = new Character("Bernard");
	ICharacter *C = new Character("Christian");
	IMateriaSource *src2 = new MateriaSource();
	src2->learnMateria(new Ice());
	src2->learnMateria(new Cure());	
	std::cout << std::endl;

	AMateria *m;
	m = src2->createMateria("ice");
	A->equip(m);
	m = src2->createMateria("cure");
	B->equip(m);
	std::cout << std::endl;

	A->use(0, *C);
	B->use(0, *C);
	std::cout << std::endl;
	
	ICharacter	*tmpChar;
	tmpChar = A;
	A = B;
	delete tmpChar;
	std::cout << std::endl;

	A->use(0, *C);
	B->use(0, *C);
	std::cout << std::endl;

	ICharacter	*cpyChar = new Character(*dynamic_cast<Character*>(A));
	cpyChar->use(0, *C);
	std::cout << std::endl;
	
	delete A;
	delete C;
	delete cpyChar;
	delete src2;

	return 0;
}
