/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:57:06 by romain            #+#    #+#             */
/*   Updated: 2023/12/12 14:42:00 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	printPseudo(const std::string &literal) {
	if (literal == "nan" || literal == "nanf") {
		std::cout 
			<< "char: impossible" 
			<< "\nint: impossible"
			<< "\nfloat: nanf"
			<< "\ndouble: nan" 
			<< std::endl;
	}
	else if (literal == "+inf" || literal == "+inff") {
		std::cout 
			<< "char: impossible"
			<< "\nint: impossible"
			<< "\nfloat: +inff"
			<< "\ndouble: +inf"
			<< std::endl;
	}
	else if (literal == "-inf" || literal == "-inff")
	{
		std::cout 
			<< "char: impossible"
			<< "\nint: impossible"
			<< "\nfloat: -inff"
			<< "\ndouble: -inf"
			<< std::endl;
	}
}

void	convertChar(const std::string &literal) {
	char value = literal.length() == 3 ? literal[1] : literal[0];

    std::cout 
		<< "char: " 
		<< value 
		<< "\nint: " 
		<< static_cast<int>(value)
		<< "\nfloat: "
		<< std::fixed
		<< std::setprecision(1)
		<< static_cast<float>(value)
		<< "f\ndouble: " 
		<< static_cast<double>(value) 
		<< std::endl;
}

int	convertInt(const std::string &literal) {
    std::istringstream	iss(literal);
    double				value;

    iss >> value;
    std::cout << "char: ";
    if (value < std::numeric_limits<char>::min()
		|| value > std::numeric_limits<char>::max())
		std::cout << "impossible";
	else if (!isprint(value))
		std::cout << "Non displayable";
    else
        std::cout << static_cast<char>(value);
    std::cout 
		<< "\nint: ";
	if (value < std::numeric_limits<int>::min() 
		|| value > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << value;
	std::cout
		<< "\nfloat: " 
		<< std::fixed 
		<< std::setprecision(1) 
		<< static_cast<float>(value) 
		<< "f\ndouble: " 
		<< static_cast<double>(value) 
		<< std::endl;
	return (0);
}

int	convertFloat(const std::string &literal) {
    std::istringstream	iss(literal);
    float				value;

	iss >> value;
    std::cout << "char: ";
	if (value < std::numeric_limits<char>::min()
		|| value > std::numeric_limits<char>::max())
		std::cout << "impossible";
    else if (!isprint(value))
        std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(value);
    std::cout 
		<< "\nint: ";
	if (value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout
			<< static_cast<int>(value);
	std::cout
		<< "\nfloat: " 
		<< std::fixed
		<< std::setprecision(1)
		<< value
		<< "f\ndouble: " 
		<< static_cast<double>(value) 
		<< std::endl;
	return (0);
}

int	convertDouble(const std::string &literal) {
	double				value;
	

	value = strtof(literal.c_str(), NULL);
	std::cout << "char: ";
	if (value < std::numeric_limits<char>::min()
		|| value > std::numeric_limits<char>::max())
		std::cout << "impossible";
    else if (!isprint(value))
        std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(value);
	std::cout 
		<< "\nint: ";
	if (value < std::numeric_limits<int>::min()
		|| value > std::numeric_limits<int>::max())
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(value);
	std::cout
		<< "\nfloat: "
		<< std::fixed
		<< std::setprecision(1)
		<< static_cast<float>(value)
		<< "f\ndouble: "
		<< value
		<< std::endl;
	return (0);
}
