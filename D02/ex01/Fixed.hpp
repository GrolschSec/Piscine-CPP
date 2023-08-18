/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:30:58 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/18 15:13:04 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static int const	_fractionnalBits = 8;
		
	public:
		Fixed();
		Fixed(int const int_val);
		Fixed(float const float_val);
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)		const;
		
};
std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);
#endif