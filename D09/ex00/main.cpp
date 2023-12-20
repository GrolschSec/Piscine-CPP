/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:59:30 by romain            #+#    #+#             */
/*   Updated: 2023/12/18 17:58:09 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {
	(void)argv;
	try {
		if (argc != 2) {
			throw BitcoinExchange::CouldNotOpenFileException();
		}
		BitcoinExchange	btc;
	} catch (std::exception &e) {
		std::cerr
			<< "Error: "
			<< e.what()
			<< std::endl;
	}
	return (0);
}
