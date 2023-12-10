/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:37:48 by romain            #+#    #+#             */
/*   Updated: 2023/12/10 12:01:44 by romain           ###   ########.fr       */
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
	ScalarConverter::convert(argv[1]);
	return (0);
}
