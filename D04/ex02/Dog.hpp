/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:30 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/21 16:03:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog();
		Dog				&operator=(Dog const &rhs);
		virtual void	makeSound(void)	const;
		
};
#endif
