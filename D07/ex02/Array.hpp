/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:01:30 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 11:04:23 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array {
	public:
		Array(void);
		Array(unsigned int size);
		Array(Array const &cp);
		Array	&operator=(Array const &rhs);
		T		&operator[](unsigned int i);
		~Array();
		unsigned int	size(void)	const;
		class OutOfRangeException : public std::exception {
			public:
				const char*	what() const throw();
		};
	private:
		unsigned int	_size;
		T				*_array;
};
# include "Array.tpp"
#endif
