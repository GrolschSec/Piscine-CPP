/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:40:51 by romain            #+#    #+#             */
/*   Updated: 2023/12/10 15:17:57 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <limits>
# include <string>
# include <sstream>
# include <cctype>
# include <iomanip>

enum e_type {
	INVALID,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	P_LITERAL
};

class ScalarConverter {
	public:
		static void	convert(const std::string &literal);
	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &cp);
		ScalarConverter	&operator=(const ScalarConverter &rhs);
		~ScalarConverter();
};

/* ************************************************************************** */

e_type	findType(const std::string &literal);
bool	isChar(const std::string &literal);
bool	isInt(const std::string &literal);
bool	isFloat(const std::string &literal);
bool	isPseudoLiteral(const std::string &literal);

/* ************************************************************************** */

void	printPseudo(const std::string &liberal);
void	convertChar(const std::string &literal);
void	convertInt(const std::string &literal);
void	convertFloat(const std::string &literal);
void	convertDouble(const std::string &literal);

/* ************************************************************************** */
#endif
