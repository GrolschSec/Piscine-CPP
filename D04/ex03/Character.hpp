/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:12:57 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 16:58:14 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &character);
		virtual ~Character();
		Character	&operator=(Character const &rhs);

		virtual std::string const	&getName(void)	const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
};
#endif
