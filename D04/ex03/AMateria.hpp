/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:38:40 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 17:00:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &amateria);
		AMateria	&operator=(AMateria const &rhs);
		virtual		~AMateria();
		std::string const	&getType(void)	const;
		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter &target);
	protected:
		std::string	_type;
};
#endif
