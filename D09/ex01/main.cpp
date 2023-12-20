/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:35:07 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 22:45:18 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr
			<< "Usage: "
			<< argv[0]
			<< " [ARGS]"
			<< std::endl;
		return (-1);
	}
	try {
		RPN	calc(argv[1]);
	} catch (std::exception &e) {
		std::cerr
			<< "Error: "
			<< e.what()
			<< std::endl;
	}
	return (0);
}
