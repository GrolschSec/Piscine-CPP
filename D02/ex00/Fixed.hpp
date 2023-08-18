/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:30:58 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/18 14:25:30 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_value;
		static int const	_fractionnalBits = 8;
		
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		
};
#endif