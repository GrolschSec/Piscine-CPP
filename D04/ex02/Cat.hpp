/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:11:24 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 14:08:22 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		~Cat();
		Cat	&operator=(Cat const &rhs);
		virtual void	makeSound(void)	const;
		void			setBrainIdea(const std::string &idea);
		std::string		getBrainIdea(int index)	const;
		const Brain			*getBrainPtr(void)	const;
	private:
		Brain	*_brain;
};
#endif
