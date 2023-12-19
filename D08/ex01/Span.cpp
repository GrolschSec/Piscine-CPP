/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:42:49 by romain            #+#    #+#             */
/*   Updated: 2023/12/19 19:59:34 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************************************************************** */

Span::Span(void) {}

Span::Span(unsigned int N) {
	std::cout
		<< "[Span] - Constructor called with a size of: "
		<< N
		<< std::endl;
	this->_vc.reserve(N);
}

Span::Span(Span const &cp) {
	*this = cp;
}

Span	&Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_vc = rhs._vc;
	}
	return (*this);
}

Span::~Span() {
	std::cout
		<< "[Span] - Destructor called."
		<< std::endl;
}

/* ************************************************************************** */

void	Span::addNumber(int num) {
	if (this->_vc.capacity() > this->_vc.size()) {
		this->_vc.push_back(num);
		return ;
	}
	throw std::overflow_error("[Span] - Vector is full.");
}

size_t	Span::longestSpan(void)		const {
	std::vector<int>::const_iterator min;
	std::vector<int>::const_iterator max;

	if (this->_vc.size() <= 1) {
		throw std::logic_error("[Span] - Not enough values to find shortest span.");
	}
	min = std::min_element(this->_vc.begin(), this->_vc.end());
	max = std::max_element(this->_vc.begin(), this->_vc.end());
	return (*max - *min);
}

size_t	Span::shortestSpan(void)	const {
	std::vector<int> vc2(this->_vc);

	if (this->_vc.size() <= 1) {
		throw std::logic_error("[Span] - Not enough values to find shortest span.");
	}
	std::sort(vc2.begin(), vc2.end());
	size_t	res = std::numeric_limits<size_t>::max();
	for (size_t i = 1; i < vc2.size(); i++) {
		size_t span = vc2[i] - vc2[i - 1];
		if (span < res)
			res = span;
	}
	return (res);
}

void	Span::addNumbers(std::vector<int>::const_iterator it, 
	std::vector<int>::const_iterator ite) {
	if (ite < it) {
		throw std::logic_error("[Span] - Begin must be smaller than end");
	}
	for (std::vector<int>::const_iterator it2 = it; it2 != ite; it2++) {
		this->addNumber(*it2);
	}
}

/* ************************************************************************** */
