/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:37:02 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/24 17:19:46 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string	const &type);
		WrongAnimal(WrongAnimal const &wronganimal);
		~WrongAnimal();
		//virtual ~WrongAnimal();
		WrongAnimal	&operator=(WrongAnimal const &rhs);
		void		makeSound(void)	const;
		std::string	getType(void)	const;
	protected:
		std::string	_type;
};
#endif
