/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:43:06 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 15:12:44 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &ice);
		~Ice();
		Ice				&operator=(Ice const &rhs);
		virtual Ice*	clone(void)	const;
		virtual void	use(ICharacter &target);
};
#endif
