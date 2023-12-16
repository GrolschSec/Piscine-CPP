/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:07:44 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 09:56:01 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void) {
	std::string	strs[] = {
		"Hello world",
		"Salut",
		"Bye",
		"Au revoir",
		"Thanks",
		"Merci"
	};
	int	nbrs[] = {
		56,
		33333333,
		32
	};

	std::cout << "Iter on an array of strings: \n";
	::iter<std::string>(strs, 6, ::print<std::string>);
	std::cout << "\nIter on an array of integers: \n";
	::iter<int>(nbrs, 3, print<int>);
}
