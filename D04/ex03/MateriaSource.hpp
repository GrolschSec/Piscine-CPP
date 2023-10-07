/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:12:55 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:02:57 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &materia);
		virtual ~MateriaSource();
		MateriaSource		&operator=(MateriaSource const &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_materia[4];
};
#endif
