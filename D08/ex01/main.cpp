/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:42:20 by romain            #+#    #+#             */
/*   Updated: 2023/12/19 20:34:25 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    Span 				sp = Span(10);
	std::vector<int>	additionalNumbers(9, 2);

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

    return 0;
}

