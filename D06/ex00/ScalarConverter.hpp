/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 21:40:51 by romain            #+#    #+#             */
/*   Updated: 2023/12/11 10:03:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
# include <iostream>
# include <limits>
# include <string>
# include <sstream>
# include <cctype>
# include <cerrno>
# include <cstdlib>
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
		class InvalidInputException : public std::exception {
			const char* what() const throw();
		};
		class OverflowException : public std::exception {
			const char* what() const throw();
		};
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
int		convertInt(const std::string &literal);
int		convertFloat(const std::string &literal);
int		convertDouble(const std::string &literal);

/* ************************************************************************** */
#endif
