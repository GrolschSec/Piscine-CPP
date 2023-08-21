/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:18 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 15:58:52 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &Aanimal);
		virtual	~AAnimal();
		AAnimal	&operator=(AAnimal const &rhs);
		std::string	getType(void)	const;
		virtual void	makeSound(void)	const = 0;
};
#endif
