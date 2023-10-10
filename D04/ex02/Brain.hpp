/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 14:46:00 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/10/10 14:01:23 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
		int			_ideas_count;
	public:
		Brain(void);
		Brain(Brain const &brain);
		~Brain();
		Brain	&operator=(Brain const &rhs);
		void	setIdea(std::string idea);
		std::string getIdea(int index)	const;
		const Brain	*getPtr(void)	const;
};
#endif