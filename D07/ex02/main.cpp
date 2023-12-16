/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:01:13 by romain            #+#    #+#             */
/*   Updated: 2023/12/16 11:02:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void) {
	Array<int>	t1;
	Array<int>	t2;

	t1 = t2;

	unsigned int		size = 5;
	Array<std::string>	a(size);

	try {
		a[0] = "1";
		a[1] = "2";
		a[2] = "3";
		a[3] = "4";
		a[4] = "5";
		a[5] = "6";
	} catch (Array<std::string>::OutOfRangeException &e) {
		std::cerr
			<< "Exception caught: "
			<< e.what()
			<< std::endl;
	}
	Array<std::string>b(a);
	for (unsigned int i = 0; i < b.size(); i++) {
		std::cout
			<< b[i]
			<< std::endl;
	}
}
