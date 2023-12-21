/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:22:55 by romain            #+#    #+#             */
/*   Updated: 2023/12/21 13:22:45 by romain           ###   ########.fr       */
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
	this->sort();
}

PmergeMe::~PmergeMe() {}

/* ************************************************************************** */

void	PmergeMe::validateArg(std::string const &arg) const {
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

void	PmergeMe::sort(void) {
	std::cout
		<< "Before: ";
	printContainer(this->_dq);
	std::cout
		<< "After: ";
	clock_t		startDq = clock();
	mergeInsertSort(this->_dq);
	clock_t		endDq = clock();
	clock_t		startLst = clock();
	mergeInsertSort(this->_lst);
	clock_t		endLst = clock();
	printContainer(this->_dq);
	double timeList = static_cast<double>(endLst - startLst) 
		/ CLOCKS_PER_SEC * 1000;
	double timeDeque = static_cast<double>(endDq - startDq) 
		/ CLOCKS_PER_SEC * 1000;
	std::cout
		<< std::fixed
		<< std::setprecision(5)
		<< "Time to process a range of "
		<< this->_size
		<< " elements with std::deque: "
		<< timeDeque
		<< "\nTime to process a range of "
		<< this->_size
		<< " elements with std::list: "
		<< timeList
		<< std::endl;
}

template <typename T>
void	PmergeMe::printContainer(T &container) const {
	for (
		typename T::iterator it = container.begin(); 
		it != container.end(); it++) {
		std::cout << *it << " ";	
	}
	std::cout
		<< std::endl;
}

template <typename T>
void	PmergeMe::merge(T &container, T &left, T &right) {

	typename T::iterator it1 = left.begin();
	typename T::iterator it2 = right.begin();

	while (it1 != left.end() && it2 != right.end()) {
		if (*it1 < *it2) {
			container.push_back(*it1);
			it1++;
		} else {
			container.push_back(*it2);
			it2++;
		}
	}
	container.insert(container.end(), it1, left.end());
	container.insert(container.end(), it2, right.end());
	
}

template <typename T>
void	PmergeMe::mergeInsertSort(T &container) {

	if (container.size() < 2) {
		return ;
	}
	typename T::iterator	middle = container.begin();
	std::advance(middle, container.size() / 2);
	T left(container.begin(), middle);
	T right(middle, container.end());
	mergeInsertSort(left);
	mergeInsertSort(right);
	container.clear();
	merge(container, left, right);
}
