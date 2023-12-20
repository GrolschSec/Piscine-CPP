/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:58:49 by romain            #+#    #+#             */
/*   Updated: 2023/12/18 17:57:31 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* ************************************************************************** */

BitcoinExchange::BitcoinExchange(void) {
	std::ifstream	file("data.csv");
	std::string		line;

	if (!file.is_open())
        throw CouldNotOpenFileException();
	std::getline(file, line);
	if (line != "date,exchange_rate")
		throw InvalidDBHeaderException();
	while (std::getline(file, line)) {
   		std::istringstream	iss(line);
		std::string			date;
		double				rate;

		std::getline(iss, date, ',');
		iss >> rate;
		if (!date.empty() 
			&& iss 
			&& (iss.peek() == EOF || iss.peek() == '\n') 
			&& verifyDate(date)) {
			this->_db[date] = rate;
		} else {
			std::cerr
				<< "Error: format in database => "  
				<< line 
				<< std::endl;
		}
	}
	file.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &cp) {
	(void)cp;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	(void)rhs;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

/* ************************************************************************** */

bool	BitcoinExchange::verifyDate(std::string const &date) {
	std::istringstream	iss(date);
	unsigned int		year, month, day;
    char				delim1, delim2;

	iss >> year >> delim1 >> month >> delim2 >> day;
	if (date.length() != 10 || delim1 != '-' || delim2 != '-') {
		return (false);
	}
	if (year < 1 || year > 2023) {
		return (false);
	}
	if (month < 1 || month > 12) {
		return (false);
	}
	if (day < 1 || day > 31) {
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::verifyRate(double const &rate) {
	if (rate < 0) {
		return (false);
	}
	if (rate > 1000) {
		return (false);
	}
	return (true);
}

void	BitcoinExchange::printMap(void)	const {
	for (
		std::map<std::string, double>::const_iterator it = this->_db.begin();
		it != this->_db.end();
		it++
	) {
		std::cout 
			<< "Date: " 
			<< it->first 
			<< " Rate: " 
			<< it->second 
			<< std::endl;
	}
}

/* ************************************************************************** */

const char*	BitcoinExchange::CouldNotOpenFileException::what() const throw() {
	return ("could not open file.");
}

const char* BitcoinExchange::InvalidDBHeaderException::what() const throw() {
	return ("invalid database header, it should be: 'date,exchange_rate'.");
}

