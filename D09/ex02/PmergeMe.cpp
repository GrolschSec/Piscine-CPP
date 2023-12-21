/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:22:55 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 12:47:35 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ************************************************************************** */

PmergeMe::PmergeMe(void) : _size(0) {}

PmergeMe::PmergeMe(PmergeMe const &cp) : _size(0) {
	(void)cp;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs) {
	(void)rhs;
	return (*this);
}

PmergeMe::PmergeMe(const int ac, char **av) : _size(ac) {
	for (int i = 0; i < this->_size; i++) {
		this->validateArg(av[i]);
		this->_lst.push_back(std::atoi(av[i]));
		this->_dq.push_back(std::atoi(av[i]));
	}
	if (this->_lst.empty() || this->_dq.empty()) {
		throw std::runtime_error("containers are empty.");
	}
}

PmergeMe::~PmergeMe() {}

/* ************************************************************************** */

void	PmergeMe::validateArg(std::string const &arg) {
	long long	value;
	for (size_t i = 0; i < arg.size(); i++) {
		if (!isdigit(arg[i]) && arg[i] != '-')
			throw std::invalid_argument(
				"only integers are accepted as input: \"" + arg + "\".");
	}
	value = std::atoll(arg.c_str());
	if (value > std::numeric_limits<int>::max()) {
		throw std::overflow_error("integer overflow: \"" + arg + "\".");
	} else if (value < std::numeric_limits<int>::min()) {
		throw std::underflow_error("integer underflow: \"" + arg + "\".");
	} else if (value < 0) {
		throw std::invalid_argument(
			"input must be positive integer: \"" + arg + "\".");
	}
}
