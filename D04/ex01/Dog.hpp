/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:30 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/07 20:04:10 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		~Dog();
		Dog				&operator=(Dog const &rhs);
		virtual void	makeSound(void)	const;
		void			setBrainIdea(const std::string &idea);
		std::string		getBrainIdea(int index)	const;
		const Brain			*getBrainPtr(void)	const;
	private:
		Brain	*_brain;
		
};
#endif
