/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:26:47 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 11:32:53 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc < 2) {
		std::cout
			<< "Usage: "
			<< argv[0]
			<< " [SEQUENCE OF INTEGERS]"
			<< std::endl;
		return (0);
	}
	try {
		PmergeMe	sort(&argv[1]);
	} catch (std::exception &e) {
		std::cout
			<< "Error: "
			<< e.what()
			<< std::endl;
	}
	return (0);
}
