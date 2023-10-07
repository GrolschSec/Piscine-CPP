/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:17:04 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 14:49:52 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
    	Cure(void);
    	Cure(Cure const &src);
    	virtual ~Cure();
		Cure			&operator=(Cure const &rhs);
		virtual Cure*	clone() const;
		virtual void	use(ICharacter &target);
};
#endif
