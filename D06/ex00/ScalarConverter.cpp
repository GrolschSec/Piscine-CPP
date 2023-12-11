/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:37:59 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 08:54:32 by romain           ###   ########.fr       */
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
		case INT:
			if (convertInt(literal))
				throw ScalarConverter::OverflowException();
			break;
		case FLOAT:
			if (convertFloat(literal))
				throw ScalarConverter::OverflowException();
			break;
		case DOUBLE:
			if (convertDouble(literal))
				throw ScalarConverter::OverflowException();
			break;
		case  P_LITERAL:
			printPseudo(literal);
			break;
	}
}

/* ************************************************************************** */

const char*	ScalarConverter::InvalidInputException::what() const throw() {
	return ("Invalid input");
}

const char* ScalarConverter::OverflowException::what() const throw() {
	return ("Overflow happened");
}
