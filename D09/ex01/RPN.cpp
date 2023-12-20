/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:36:17 by romain            #+#    #+#             */
/*   Updated: 2023/12/20 22:56:12 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/* ************************************************************************** */

RPN::RPN(void) {}

RPN::RPN(RPN const &cp) {
	(void)cp;
}

RPN::RPN(const char *arg) {
	if (!arg) {
		throw std::invalid_argument("argument is a null pointer.");
	}
	std::string	str(arg);
	this->authorizedChar(str);
	this->calculator(str);
	this->getResult();
}

RPN	&RPN::operator=(RPN const &rhs) {
	(void)rhs;
	return (*this);
}

RPN::~RPN() {}

/* ************************************************************************** */

void	RPN::authorizedChar(std::string const &str) {
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] != '-' 
			&& str[i] != '+' 
			&& str[i] != '/' 
			&& str[i] != '*'
			&& str[i] != ' '
			&& !isdigit(str[i])) {
			throw std::invalid_argument(
				"expression contains invalid characters."
			);
		}
	}
}

void	RPN::validateNum(std::string const &digit) {
	bool	isDecimal = false;

	for (size_t i = 0; i < digit.size(); i++) {
		if (std::isdigit(digit[i])) {
			continue ;
		} else if (digit[i] == '.') {
			if (isDecimal 
				|| i == digit.size() - 1 
				|| !std::isdigit(digit[i + 1])) {
				throw std::invalid_argument("invalid digit.");	
			}
			isDecimal = true;
		} else {
			throw std::invalid_argument("invalid expression.");
		}
	}
	this->_stack.push(std::atof(digit.c_str()));
}

void	RPN::doOps(std::string const &op) {
	double	operator1;
	double	operator2;
	if (this->_stack.size() < 2) {
		throw std::invalid_argument("invalid expression.");
	}
	operator1 = this->_stack.top();
	this->_stack.pop();
	operator2 = this->_stack.top();
	this->_stack.pop();
	if (op == "+") {
		this->_stack.push(operator2 + operator1);
	} else if (op == "-") {
		this->_stack.push(operator2 - operator1);
	} else if (op == "*") {
		this->_stack.push(operator2 * operator1);
	} else if (op == "/") {
		if (operator2 == 0) {
			throw std::invalid_argument("dividing by zero is forbidden");
		}
		this->_stack.push(operator2 / operator1);
	}
}

void	RPN::calculator(std::string const &expr) {
	std::istringstream	iss(expr);
	std::string			str;


	while (iss >> str) {
		if (std::isdigit(str[0])) {
			this->validateNum(str);
		} else {
			this->doOps(str);
		}
	}
}

void	RPN::getResult(void)	const {
	std::cout
		<< this->_stack.top()
		<< std::endl;
}

/* ************************************************************************** */
