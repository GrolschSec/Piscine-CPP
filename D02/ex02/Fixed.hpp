/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:30:58 by rlouvrie          #+#    #+#             */
/*   Updated: 2023/08/19 13:04:03 by rlouvrie         ###   ########.fr       */
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
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		Fixed	&operator=(Fixed const &rhs);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	operator+(Fixed const &rhs)		const;
		Fixed	operator-(Fixed const &rhs)		const;
		Fixed	operator*(Fixed const &rhs)		const;
		Fixed	operator/(Fixed const &rhs)		const;
		bool	operator<(Fixed const &rhs)		const;
		bool	operator>(Fixed const &rhs)		const;
		bool	operator<=(Fixed const &rhs)	const;
		bool	operator>=(Fixed const &rhs)	const;
		bool	operator==(Fixed const &rhs)	const;
		bool	operator!=(Fixed const &rhs)	const;
		int 	getRawBits(void) 				const;
		float	toFloat(void)					const;
		int		toInt(void)						const;
		void	setRawBits(int const raw);
};
std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);
#endif