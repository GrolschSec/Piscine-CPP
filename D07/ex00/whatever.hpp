/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:15:24 by romain            #+#    #+#             */
/*   Updated: 2023/12/13 10:32:00 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	T	swap;

	swap = a;
	a = b;
	b = swap;
}

template <typename T>
const T	&min(const T &a, const T &b) {
	return (a <= b ? a : b);
}

template <typename T>
const T &max(const T&a, const T &b) {
	return (a >= b ? a : b);
}
#endif
