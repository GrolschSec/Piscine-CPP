/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:47 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 23:18:21 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/* ************************************************************************** */

Base::~Base() {}

/* ************************************************************************** */

Base	*generate(void) {
	int	nb;

	srand(time(NULL));
	nb = rand() % 3;
	switch (nb) {
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
		default:
			std::cerr
				<< "Error: invalid random number\n"
			break;
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "C\n";
	else
		std::cerr
			<< "Error: invalid pointer"
}

void	identify(Base& p) {
	try	{
		dynamic_cast<A &>(p);
		std::cout
			<< "A\n";
	}
	catch (std::exception &e) {
		try {
			dynamic_cast<B &>(p);
			std::cout
				<< "B\n";
		}
		catch (std::exception &e) {
			try {
				dynamic_cast<C &>(p);
				std::cout
					<< "C\n";
			}
			catch (std::exception &e) {
				std::cerr
					<< "Error: "
					<< e.what()
					<< std::endl;
			}
		}
	}
}

/* ************************************************************************** */
