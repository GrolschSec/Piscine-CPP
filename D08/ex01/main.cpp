/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:42:20 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 12:29:38 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    Span 				sp = Span(10);
	std::vector<int>	additionalNumbers(9, 2);
	int					nb = 10001;
	Span				sp2(nb);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);

    try {
        sp.addNumbers(additionalNumbers.begin(), additionalNumbers.end());
    } catch (const std::exception &e) {
        std::cerr 
			<< "Exception caught during addNumbers: "
			<< e.what() 
			<< std::endl;
    }
    try {
        std::cout 
			<< "Shortest Span: " 
			<< sp.shortestSpan()
			<< "\nLongest Span: "
			<< sp.longestSpan()
			<< std::endl;
    } catch (const std::exception &e) {
        std::cerr 
			<< "Exception caught: " 
			<< e.what()
			<< std::endl;
    }
	std::srand(std::time(NULL));
	additionalNumbers.reserve(nb);
	for (int i = 0; i < nb; ++i) {
		sp2.addNumber(std::rand());
    }
	try {
        std::cout 
			<< "Shortest Span: " 
			<< sp2.shortestSpan()
			<< "\nLongest Span: "
			<< sp2.longestSpan()
			<< std::endl;
    } catch (const std::exception &e) {
        std::cerr 
			<< "Exception caught: " 
			<< e.what()
			<< std::endl;
    }
    return (0);
}
