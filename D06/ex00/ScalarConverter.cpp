/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:37:59 by romain            #+#    #+#             */
/*   Updated: 2023/12/12 15:34:37 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/* ************************************************************************** */

ScalarConverter::~ScalarConverter() {}

/* ************************************************************************** */

void	ScalarConverter::convert(const std::string &literal) {
	e_type	type = findType(literal);

	switch (type) {
		case INVALID:
			throw ScalarConverter::InvalidInputException();
		case CHAR:
			convertChar(literal);
			break;
		case DOUBLE:
			convertDouble(literal);
			break;
		case P_LITERAL:
			printPseudo(literal);
	}
}

/* ************************************************************************** */

const char*	ScalarConverter::InvalidInputException::what() const throw() {
	return ("Invalid input");
}

const char* ScalarConverter::OverflowException::what() const throw() {
	return ("Overflow happened");
}
