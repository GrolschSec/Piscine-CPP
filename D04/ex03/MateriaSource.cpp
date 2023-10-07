/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:20:39 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 16:33:56 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; ++i)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; ++i)
	{
		if (src._materia[i])
			this->_materia[i] = src._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete _materia[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete this->_materia[i];
			if (rhs._materia[i])
				this->_materia[i] = rhs._materia[i]->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m->clone();
			return ;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
