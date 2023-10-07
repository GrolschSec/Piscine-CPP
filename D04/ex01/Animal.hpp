/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:18 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 13:31:06 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &animal);
		virtual	~Animal();
		Animal	&operator=(Animal const &rhs);
		std::string	getType(void)	const;
		virtual void	makeSound(void)	const;
	protected:
		std::string	_type;
};
#endif
