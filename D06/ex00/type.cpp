/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:05:13 by romain            #+#    #+#             */
/*   Updated: 2023/12/10 11:58:08 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

e_type	findType(const std::string &literal) {
	if (literal.empty())
		return (INVALID);
	if (isPseudoLiteral(literal))
		return (P_LITERAL);
	if (isChar(literal))
		return (CHAR);
	if (isInt(literal))
		return (INT);
	if (isFloat(literal)) {
		if (literal[literal.length() - 1] != 'f')
			return (DOUBLE);
		return (FLOAT);
	}
	return (INVALID);
}

bool	isChar(const std::string &literal) {
	if (literal.length() == 1 && !isdigit(literal[0]))
		return (true);
	if (literal.length() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return (true);
	return (false);
}

bool	isInt(const std::string &literal) {
	size_t	startIndex = 0;

	if (literal[0] == '-' || literal[0] == '+') {
		if (literal.length() == 1)
			return (false);
		startIndex = 1;
	}
	for (size_t i = startIndex; i < literal.length(); i++) {
		if (!isdigit(literal[i]))
			return (false);
	}
	return (true);
}

bool	isFloat(const std::string &literal) {
	size_t	startIndex = 0;

	if (literal[0] == '-' || literal[0] == '+') {
		if (literal.length() == 1)
			return (false);
		startIndex = 1;
	}
	size_t dotPos = literal.find('.');
	if (dotPos != literal.npos) {
		if (literal.find('.', dotPos + 1) != literal.npos)
			return (false);
		if (literal.length() < 3 || dotPos == 0 
			|| dotPos == literal.length() -1)
			return (false);
	}
	if (literal[literal.length() - 1] == 'f') {
		if (literal.length() == 1)
			return (false);
	}
	for (size_t i = startIndex; i < literal.length(); i++) {
		if (!isdigit(literal[i])) {
			if (literal[i] == '.')
				continue ;
			else if (i == literal.length() - 1 && literal[i] == 'f')
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

bool	isPseudoLiteral(const std::string &literal) {
	if (literal == "nan" 
		|| literal == "nanf" 
		|| literal == "-inf" 
		|| literal == "+inf" 
		|| literal == "-inff" 
		|| literal == "+inff")
		return (true);
	return (false;) 
}
