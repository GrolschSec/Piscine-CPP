/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:30:58 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/09/29 12:18:37 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const int_val);
		Fixed(float const float_val);
		Fixed(Fixed const &fixed);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);
		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)		const;
	private:
		int					_value;
		static int const	_fractionnalBits = 8;
};
std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);
#endif