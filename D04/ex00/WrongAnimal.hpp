/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:37:02 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 17:20:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string	const &type);
		WrongAnimal(WrongAnimal const &wronganimal);
		~WrongAnimal();
		//virtual ~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		void		makeSound(void)	const;
		std::string	getType(void)	const;
};
#endif
