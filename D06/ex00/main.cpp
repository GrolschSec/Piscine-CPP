/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:37:48 by romain            #+#    #+#             */
/*   Updated: 2023/12/10 16:30:07 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout
			<< "Usage: ./convert [string]"
			<< std::endl;
		return (0);
	}
	try {
		ScalarConverter::convert(argv[1]);
	}
	catch (std::exception &e) {
		std::cerr
			<< "Exception caught: "
			<< e.what()
			<< std::endl;
	}
	return (0);
}
