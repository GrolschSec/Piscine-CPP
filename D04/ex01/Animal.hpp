/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:18 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 13:51:48 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &animal);
		virtual	~Animal();
		Animal	&operator=(Animal const &rhs);
		std::string	getType(void)	const;
		virtual void	makeSound(void)	const;
};
#endif
