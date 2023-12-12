/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:57:28 by romain            #+#    #+#             */
/*   Updated: 2023/12/12 14:00:56 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	Base	*ptr;

	ptr = generate();

	std::cout << "Identify with pointer: \n\t";
	identify(ptr);

	std::cout << "Identify with reference: \n\t";
	identify(*ptr);

	delete ptr;

	return (0);
}
